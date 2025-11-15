//  -------------------------------------  //
//  Copyright Katherine Asher Rogers 2025  //
//  -------------------------------------  //
#ifndef SONGRECORDING_H_
#define SONGRECORDING_H_

#include <string>
using std::string;
#include <iostream>
using std::ostream;

class SongRecording{
private:

    string songTitle;
    string* artistName;
    int artistNumber;
    int trackLength;

public:

    SongRecording(string title = "untitled", string primaryArtist = "unknown", int trackLength = 0, int numberOfArtists = 1);
    SongRecording(SongRecording &obj);

};

#endif