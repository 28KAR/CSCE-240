// Copyright 2025 bhipp
// 9/30 topics: multi-subscripted array parameters, cstrings, file i/o,
//              main with arguments
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<fstream>  // file stream library
using std::ofstream;  // output file stream class
using std::ifstream;  // input file stream class
#include"arrayfunctions.h"

int main(int argc, char * argv[]) {
  cout << "argc = " << argc << endl;
  // for ( int i = 0; i < argc; ++i )
  //  cout << "argv[" << i << "] = " << argv[i] << endl;
  cout << argv[1] << endl;
  ifstream ifile(argv[1]);
  char n = ifile.get();
  while ( ifile.good() ) {
    cout << n;
    n = ifile.get();
  }
  cout << endl;
  return 0;
}



/*
int main() {
  // without the second argument the file will be opened to overwrite
  // the contents
  ofstream ofile("lookatthis.txt", std::ofstream::app);
  ofile << "Hello World!!" << endl;
  ofile.close();

  ifstream ifile("sept30.cc");
  char next;
  //  ifile >> next;  // >> skips whitespace characters
  next = ifile.get();
  while ( ifile.good() ) {
    cout << next;
    // ifile >> next;
    next = ifile.get();
  }
  ifile.close();
  return 0;
}
*/






/*
int main() {
  int nums[] = {1, 2, 3};
  cout << nums << endl;
  // the character array below has a size of 13 (12 non-null characters + 
  // the null character)
  char greeting[] = "Hello World!";
                    // {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', 
                    // '!', '\0' };
  cout << greeting << endl;
  //  int i = 0;
  //  while ( greeting[i] != '\0' ) {
  //    cout << greeting[i];
  //    ++i;
  //  }
  cout << "Enter a character string ";
  cin >> greeting;  // NEVER use this again for input from user due to the
                    // possibility of overstepping the array bounds
  cout << "Here's what I got: " << greeting << endl;
 
  for ( int i = 0; i < 80; ++i )
    cout << greeting[i];
  cout << endl;
  return 0;
}
*/


/*
int main() {
  const int kRows = 5;
  int two_d[kRows][kCols] = { {1, 2, 3, 4, 5}, {10, 20, 100}, {50}, 
                              {12, 18, 20}, {4} };
  for ( int i = 0; i < kRows; ++i ) {
    for ( int j = 0; j < kCols; ++j ) {
      cout << two_d[i][j] << " ";
    }
    cout << endl;
  }
  cout << Average(two_d, kRows) << "\n" << Average(two_d, kRows, 'r', 1)
       << "\n" << Average(two_d, kRows, 'c', 0) << endl;
  return 0;
}
*/
