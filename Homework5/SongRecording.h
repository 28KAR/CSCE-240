//  -------------------------------------  //
//  Copyright Katherine Asher Rogers 2025  //
//  -------------------------------------  //
#ifndef SONGRECORDING_H_
#define SONGRECORDING_H_

#include <string>
#include <iostream>
using std::ostream;

namespace csce240_programming_assignment_5 {
    class SongRecording{
    private:

        std::string songTitle;
        std::string* artistNames;
        int artistNumber;
        int trackLength;

    public:

        SongRecording(std::string title = "untitled", std::string primaryArtist = "unknown", int trackLength = 0, int numberOfArtists = 1);
        explicit SongRecording(SongRecording& obj);
        SongRecording& operator = (const SongRecording &songRecord);
        ~SongRecording();
        std::string GetTitle();
        int GetNumArtists();
        void SetNumArtists(int);
        void SetTitle(std::string title);
        void SetArtist(std::string artist, int num = 1);
        std::string GetArtist(int num);
        int GetTrackLength();
        void SetTrackLength(int);

    };
};

#endif