//  -------------------------------------  //
//  Copyright Katherine Asher Rogers 2025  //
//  -------------------------------------  //
#ifndef SONGRECORDING_H_
#define SONGRECORDING_H_

#include <string>
#include <iostream>

namespace csce240_programming_assignment_5 {
    class SongRecording{
    private:

        std::string songTitle;
        std::string* artistNames;
        int artistNumber;
        int trackLength;

    public:

        SongRecording(std::string title = "untitled", std::string primaryArtist = "unknown", int numberOfArtists = 0, int trackLength = 1);

        explicit SongRecording(const SongRecording& obj);
        
        SongRecording& operator = (const SongRecording& songRecord);
        
        ~SongRecording();
        
        std::string GetTitle();

        std::string GetArtist(int num = 1);
        
        int GetNumArtists();
        
        int GetTrackLength();
        
        void SetNumArtists(int num);
        
        void SetTitle(const std::string& title);
        
        void SetArtist(const std::string& artist, int num = 1);
        
        void SetTrackLength(int num);

    };
};

#endif