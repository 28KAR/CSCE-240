// Copyright 2025 bhipp
// Implement Book class functionality
#include"book.h"
#include<string>
using std::string;
#include<iostream>
using std::ostream;

ostream& operator << (ostream& where, const Book& b) {
  where << b.title_ << " by " << b.author_;
  if ( b.num_chapters_ > 0 ) {
    where << " Chapters: ";
    for ( int i = 0; i < b.num_chapters_ - 1; ++i )
      where << b.ch_titles_[i] << ", ";
    where << b.ch_titles_[b.num_chapters_ - 1];
  }
  return where;
}

void Book::SetTitle(string title) {
  if ( title != "" )
    title_ = title;
}

void Book::SetAuthor(string author) {
  if ( author != "" )
    author_ = author;
}

Book::Book(string title, string author) : title_("Untitled"),
                                          author_("Unknown"),
                                          num_chapters_(0),
                                          ch_titles_(nullptr) {
  SetTitle(title);
  SetAuthor(author);
}

// copy constructor
Book::Book(const Book& tocopy) : title_(tocopy.title_),
                                 author_(tocopy.author_),
                                 num_chapters_(tocopy.num_chapters_),
                                 ch_titles_(nullptr) {
  if ( num_chapters_ > 0 ) {
    ch_titles_ = new string[num_chapters_];
    for ( int i = 0; i < num_chapters_; ++i )
      ch_titles_[i] = tocopy.ch_titles_[i];
  }
}

Book& Book::operator = (const Book& rhs) {
  title_ = rhs.title_;
  author_ = rhs.author_;
  num_chapters_ = rhs.num_chapters_;
  if ( ch_titles_ != nullptr )
    delete [] ch_titles_;
  ch_titles_ = nullptr;
  if ( num_chapters_ > 0 ) {
    ch_titles_ = new string[num_chapters_];
    for ( int i = 0; i < num_chapters_; ++i )
      ch_titles_[i] = rhs.ch_titles_[i];
  }
  return *this;
}



void Book::SetNumChapters(int num) {
  if ( num == 0 ) {
    if ( ch_titles_ != nullptr )
      delete [] ch_titles_;
    num_chapters_ = 0;
    ch_titles_ = nullptr;
  } else if ( num > 0 ) {
    if ( ch_titles_ != nullptr )
      delete [] ch_titles_;  // free up the pointer to dynamically
                             // allocated memory before moving it!
    num_chapters_ = num;
    ch_titles_ = new string[num_chapters_];
    for ( int i = 0; i < num_chapters_; ++i )
      ch_titles_[i] = "untitled chapter";
  }
}

void Book::SetChapterTitle(int i, string t) {
  if ( i > 0 && i <= num_chapters_ && t != "" )
    ch_titles_[i - 1] = t;
}

string Book::GetChapterTitle(int i) const {
  if ( i > 0 && i <= num_chapters_ )
    return ch_titles_[i - 1];
  return "Invalid chapter number";
}




