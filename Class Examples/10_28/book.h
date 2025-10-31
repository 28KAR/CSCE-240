// Copyright 20205 bhipp
// Define a Book class
#ifndef BOOK_H_
#define BOOK_H_

#include<string>
using std::string;
#include<iostream>
using std::ostream;

class Book {
  friend ostream& operator << (ostream&, const Book&);

 public:
  explicit Book(string title = "Untitled", string author = "Unkown");
  Book(const Book& tocopy);
  ~Book() { delete [] ch_titles_; }
  // assignment operator book1 = book2 takes book as left operand
  // so we can make this a member of our class
  // x = y = z;
  // returns a Book so it will cascad
        // NOT changing the right operand
  Book& operator = (const Book& tocopy);

  string GetTitle() const { return title_; }
  string GetAuthor() const { return author_; }
  void SetTitle(string title);
  void SetAuthor(string author);
  void SetNumChapters(int num);
  void SetChapterTitle(int i, string t);
  string GetChapterTitle(int i) const;

 private:
  string title_;
  string author_;
  int num_chapters_;
  string * ch_titles_;  // when we have a pointer as a data member
  // we'll need to write: 1) copy constructor 2) assignment operator
  // 3) destructor
};

#endif
