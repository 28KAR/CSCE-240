//  -------------------------------------  //
//  Copyright Katherine Asher Rogers 2025  //
//  -------------------------------------  //
#include"SongRecording.h"
#include<iostream>
#include <string>
using std::string;
using csce240_programming_assignment_5::SongRecording;

SongRecording::SongRecording(string title, string primaryArtist, int numberOfArtists, int trackLength) {

    SetTitle(title);
    SetArtist(primaryArtist);
    SetNumArtists(numberOfArtists);
    SetTrackLength(trackLength);

}

SongRecording::SongRecording(const SongRecording& obj) {

    *this = obj;
    
}
    
SongRecording& SongRecording::operator = (const SongRecording& songRecord) {

    if (this != &songRecord)
        *this = songRecord;
    return *this;

}
    
SongRecording::~SongRecording() {
    if (artistNames)
        delete[] this->artistNames;

}
    
string SongRecording::GetTitle() {

    return this->songTitle;

}
    
string SongRecording::GetArtist(int num) {

    if ((num > 0) && (num <= this->artistNumber))
        return this -> artistNames[num];
    return "out of bounds";

}

int SongRecording::GetNumArtists() {

    return this->artistNumber;

}

int SongRecording::GetTrackLength() {

    return this->trackLength;

}

void SongRecording::SetTitle(const string& title) {

    if (title.size() > 0)
        this->songTitle = title;

}

void SongRecording::SetNumArtists(int num) {

    if (num > 0)
        this->artistNumber = num;
    this -> artistNames = new string[this -> artistNumber];
}
    
void SongRecording::SetArtist(const string& artist, int num) {

    if ((artist.size() > 0)&&(num > 0) && (num <= this->artistNumber))
        this->artistNames[num] = artist;

}

void SongRecording::SetTrackLength(int num) {

    if (num > 0)
        this->trackLength = num;

}