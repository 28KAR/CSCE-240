// Copyright 2025 bhipp
#include<iostream>
using std::cout;
using std::endl;
#include"book.h"

int main() {
  Book b;
  cout << b << endl;
  b.SetTitle("Absolute C++");
  b.SetAuthor("Savitch");
  cout << b << endl;

  // the line below calls the copy constructor - if we don't write
  // one ourselves, one will be made for us that does a member-wise
  // copy of the data members
  Book bcopy = b;  // bcopy(b);
  bcopy.SetAuthor("Walter Savitch");
  cout << b << " " << bcopy << endl;

  // the line below calls the assignment operator - if we don't
  // write one, one will be made for us that does a memberwise copy
  b = bcopy;
  cout << b << " " << bcopy << endl;
  b.SetTitle("Absolute C++ Sixth Edition");
  cout << b << " " << bcopy << endl;

  b.SetNumChapters(2);
  b.SetChapterTitle(1, "Introduction");
  b.SetChapterTitle(2, "Operators and Stuff");
  b.SetChapterTitle(3, "Functions");
  cout << b << endl;

  Book bcopy2 = b;
  bcopy2.SetChapterTitle(1, "Preface");
  cout << b << "\n" << bcopy2 << endl;
  bcopy2.SetNumChapters(5);
  cout << b << "\n" << bcopy2 << endl;

  bcopy2 = b;
  bcopy2.SetChapterTitle(1, "Preface");
  cout << b << "\n" << bcopy2 << endl;
  bcopy2.SetNumChapters(5);
  cout << b << "\n" << bcopy2 << endl;
  return 0;
}
