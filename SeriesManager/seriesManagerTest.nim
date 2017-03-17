import unittest
include seriesManager

suite "test for seriesManager":

    test "test removing fileending":
            var stripFileEnding = stripFileEnding("chicago.justice.s01e04.HDTV.x265-SVA[Prime].mkv") 
            checkpoint("chicago.justice.s01e04.HDTV.x265-SVA[Prime].mkv should be chicago.justice.s01e04.HDTV.x265-SVA[Prime]")
            check:
                stripFileEnding == "chicago.justice.s01e04.HDTV.x265-SVA[Prime]"
            checkpoint("sstest.ssd.avi should be sstest.ssd")
            check:
                stripFileEnding("sstest.ssd.avi") == "sstest.ssd"
    
    test "test for detection of serie episodes and movies":
        checkpoint("series episode chicago.justice.s01e04.HDTV.x265-SVA[Prime].mkv should be detected as serie episode")
        check:
            isSeriesEpisode("chicago.justice.s01e04.HDTV.x265-SVA[Prime].mkv") == true
        checkpoint("The.Wolverine.2013.1080p.Bluray.x264.YIFY.mp4 should be detected as movie")
        check:
            isMovie("The.Wolverine.2013.1080p.Bluray.x264.YIFY.mp4") == true

    test "test get seriesName from file":
        checkpoint("series name from 'chicago.justice.s01e04.HDTV.x265-SVA[Prime].mkv' should be 'chicago justice'")
        check:
            getSeriesNameFromFile("chicago.justice.s01e04.HDTV.x265-SVA[Prime].mkv") == "chicago justice"
    
    test "test episode pattern 1 06x21":
        var pattern = re"\d\dx\d\d"
        checkpoint("assert that pattern works")
        check("The.Wolverine.2013.1080p.Bluray.x264.YIFY.mp4".contains(pattern) == false)
    
    test "levensthein distance":
        checkpoint("test that string 'home' and 'goal' has distance 3")
        check: 
            levensthein("home", "goal") == 3
        checkpoint("test that string 'chicago justice' und 'chicago' has distance 8")
        check:
            levensthein("chicago justice", "chicago") == 8
        checkpoint("test that equal strings have distance 0")
        check:
            levensthein("", "") == 0
        checkpoint("test that equal strings have distance 0")
        check:
            levensthein("", "") != 1
    
echo "finished"