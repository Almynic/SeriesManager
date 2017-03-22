import os
import re
import strutils

var dataToBeProecessed : seq[string]   # sequence which contains the data which should be processed
dataToBeProecessed = @[] # intialsize sequence dataToBeProcessed.
let fileExtensions = [".avi",".mkv",".srt",".mp4"]
let videoEncodingFormat = ["x264", "HDTV", "720p", "480p", "1080p", "Bluray", "YIFY"]
var seriesNameFolders = [""]

let episodePattern1 = re"[a-zA-Z]+[0-9][0-9][a-zA-Z]+[0-9]+" #epsiode format season 1 epsiode 1
let episodePattern2 = re"\d\d\d" #episode format 604
let episodePattern3 = re"\d\dx\d\d" #episode format 60x13
let yearPattern = re"\d\d\d\d" #year format {2012 , 1993 and so on}

# Declaring function so that order of implementation doesn't matter
proc fillDataToBeProcessed(workingDirectory: string) {.tags: [ReadDirEffect, RootEffect].}
proc createSeriesFolder(dataToBeProecessed: seq[string])
proc getSeriesNameFromFile(fileName: string): string
proc move_data(fileOrDirectory : string, destDir : string) {.tags: [WriteIOEffect, ReadIOEffect].}
proc movingFoldersToSeriesFolders(folderName : string, destFolder : string) {.tags: [ReadDirEffect, WriteDirEffect].}
proc movingFilesToSeriesFolders(fileName : string, destFolder : string) {.tags: [ReadDirEffect, WriteDirEffect, WriteIOEffect, ReadIOEffect].}
proc stripFileEnding(fileName: string): string
proc removeVideoEncodingInformationFromFileName(fileName: string): string
proc isSeriesEpisode(fileName: string): bool
proc isMovie(fileName: string): bool
proc matchFileOrFolderNameToDestFolder(fileOrFolderName: string, destFolder: string): bool 
proc levensthein(fileName: string, destFolder: string): int
proc stripEverythingfromFileName(fileName : string, isSerie: bool): string 
proc stripEverythingAfterEpisodePattern(fileName: string): string 
#[ 
    removes dots in the fileName
    @param fileName, file name
    @returns fileNameWithoutDots, the fileName striped of dots
]#

proc removeDots(fileName: string): string = 
    var fileNameWithoutDots = strutils.replace(fileName, ".", " ")
    return fileNameWithoutDots 

#[ 
    walks the entire working directory and adds all 
    files to the dataToBeProcessed array
    @param workingDirectory, the directory in which the seriesManager should do a cleanup
    @return nothing
]#

proc fillDataToBeProcessed(workingDirectory: string) =
    for kind, path in walkDir(workingDirectory):
        dataToBeProecessed.add(splitPath(path).tail)

proc createSeriesFolder(dataToBeProecessed: seq[string]) =
    for data in dataToBeProecessed:
        var series_name = getSeriesNameFromFile(data)
#[
    moves the diretory to the destDir
    @param fileOrDirectory, the file or directory to move
    @param destDir, the destination directory in which the data should be moved
]#
proc move_data(fileOrDirectory : string, destDir : string) =
    moveFile(fileOrDirectory, destDir)

#[
    extracts the series name from a file and returns the series name
    @param fileName, the file name from which the series name should be extracted
    @
]#
proc getSeriesNameFromFile(fileName: string): string =
    var fileNameStripEverything = stripEverythingAfterEpisodePattern(stripEverythingfromFileName(fileName, true))
    return fileNameStripEverything

#[
    strips the file ending of the file name and returns the file name without any extension
]#
proc stripFileEnding(fileName : string) : string =
    var (dir, name, ext) = splitFile(fileName)
    var stripFileEnding = replace(fileName, $ext, "")
    return stripFileEnding

#[

]#
proc stripEverythingAfterEpisodePattern(fileName: string): string = 
    var fileName : string = fileName
    if(fileName.contains(episodePattern1)):
        var splitted : seq[string] = fileName.split(episodePattern1)
        fileName = splitted[0]
    return fileName

proc movingFoldersToSeriesFolders(folderName : string, destFolder : string) =
    echo ""
proc movingFilesToSeriesFolders(fileName : string, destFolder : string) =
    echo ""


#[
    removes the year sequence from a fileName
    @param fileName, the fileName
    @returm fileName, the fileName without any year pattern.
]#
proc removeYearSequence(fileName : string): string =
    if(fileName.contains(yearPattern)):
        return replace(fileName, yearPattern, " ")
    return fileName

#[
    removes the video encoding information from the file name 
    @param fileName, the file name from which the video encoding should be strip
    @return fileNameWithoutEncoding, fileName without encoding information
]#
proc removeVideoEncodingInformationFromFileName(fileName : string): string =
    var fileNameWithoutEncoding : string = fileName
    for encoding in videoEncodingFormat:
        if(fileName.contains(re(encoding))):
            fileNameWithoutEncoding = replace(fileNameWithoutEncoding, re(encoding), "")
    return fileNameWithoutEncoding

#[
    tests if the fileName matches a series episode pattern
    @param fileName, the name of the file
    @return true if a episode pattern was matched
]#
proc isSeriesEpisode(fileName: string): bool =
    if (fileName.contains(episodePattern1)):
        return true
    elif (fileName.contains(episodePattern2)):
        return true
    elif (fileName.contains(episodePattern3)):
        return true
    else:
        return false

#[
    strips everything from fileName, works on a copy of the file name doesn't actual
    change the fileName on the harddisk!!
    @param filename, the file name
    @returns strippedFileName, the serie or movie name without unnessary information
]#
proc stripEverythingfromFileName(fileName : string, isSerie: bool): string =
    var strippedFileName : string = fileName
    strippedFileName = removeVideoEncodingInformationFromFileName(strippedFileName)
    strippedFileName = stripFileEnding(strippedFileName)
    strippedFileName = removeDots(strippedFileName)
    strippedFileName = removeYearSequence(strippedFileName)
    if isSerie:
        strippedFileName = stripEverythingAfterEpisodePattern(strippedFileName)
    var removedTrallingWhiteSpace = rsplit(strippedFileName, {' '}, maxSplit=1)
    strippedFileName = removedTrallingWhiteSpace[0]
    return strippedFileName

#[
    if the fileName isn't a series episode it's matched as a movie
    @param fileName
    @returns true or false
]#
proc isMovie(fileName: string): bool =
    var movieTitle = stripEverythingfromFileName(fileName, false)
    if (not isSeriesEpisode(movieTitle)):
        return true
    else: 
        return false

#[
    calculates the levensthein distance from fileName and serieFolder
    @param fileName, the fileName 
    @param serieFolder, a serie folder
]#
proc levensthein(fileName: string, destFolder: string): int =
    var levenshteinDistance = editDistance(fileName, destFolder)
    return levenshteinDistance

#[
    tries to match a file or folder name to a specific destination folder
    @return false or true, if not match was found return false otherwise true
    @param fileOrFolderName, the file or folder name which should be match to a specific folder 
    @param destFolder, the folder which should be matched
]#
proc matchFileOrFolderNameToDestFolder(fileOrFolderName: string, destFolder: string): bool =
    var fileOrFolderNameStriped = ""
    if isSeriesEpisode(fileOrFolderName):
        fileOrFolderNameStriped = stripEverythingfromFileName(fileOrFolderName, true)
    else:
        fileOrFolderNameStriped = stripEverythingfromFileName(fileOrFolderName, false)
    let editDistance = levensthein(fileOrFolderNameStriped, destFolder)
    if editDistance < 2: return true
    else: return false

#[
    checks whether the fileName matches a folder, if it is a match it returns true
    @param workingDirectory, the working directory
    @returns fileName 
]#
proc doesSeriesFolderExist(workingDirectory:string ,fileName: string): bool = 
    if(dataToBeProecessed.contains(getSeriesNameFromFile(fileName))):
        return true
