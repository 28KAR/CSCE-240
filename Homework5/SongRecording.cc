//  -------------------------------------  //
//  Copyright Katherine Asher Rogers 2025  //
//  -------------------------------------  //
#include"SongRecording.h"
#include<iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;
using std::ostream;
using csce240_programming_assignment_5::SongRecording;

SongRecording::SongRecording(string title, string primaryArtist, int trackLength, int numberOfArtists) {

    SetTitle(title);
    SetArtist(primaryArtist);
    SetTrackLength(trackLength);
    SetNumArtists(numberOfArtists);

}
    
SongRecording::SongRecording(SongRecording& obj) {

    SetTitle(obj.GetTitle());
    SetArtist(obj.GetArtist());
    SetTrackLength(obj.GetTrackLength());
    SetNumArtists(obj.GetNumArtists());
    
}
    
SongRecording& SongRecording::operator = (const SongRecording& songRecord) {

    if (this != &songRecord)
        *this = songRecord;
    return *this;

}
    
SongRecording::~SongRecording() {

    delete[] this->artistNames;

}
    
string SongRecording::GetTitle() {

    return this->songTitle;

}
    
int SongRecording::GetNumArtists() {

    return this->artistNumber;

}

void SongRecording::SetNumArtists(int num) {

    if (num > 0)
        this->artistNumber = num;

}
    
void SongRecording::SetTitle(string title) {

    if (title.length() > 0)
        this->songTitle = title;

}
    
void SongRecording::SetArtist(string artist, int num) {

    if ((artist.length() > 0)&&(num > 0) && (num <= this->artistNumber))
        this->artistNames[num] = artist;

}
    
string SongRecording::GetArtist(int num) {

    if ((num > 0) && (num <= this->artistNumber))
        return artistNames[num];
    return "out of bounds";

}

int SongRecording::GetTrackLength() {

    return this->trackLength;

}

void SongRecording::SetTrackLength(int num) {

    if (num >= 0)
        this->trackLength = num;

}