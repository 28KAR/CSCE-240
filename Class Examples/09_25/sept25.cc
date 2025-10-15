// Copyright 2025 bhipp
// test the functions written in arrayfunctions
#include<cstdlib>
#include<ctime>
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#include"arrayfunctions.h"

int main() {
  srand(time(0));
  const int kRows = 6;
  const int kCols = 4;
  int numbers[kRows][kCols] = { {1, 2, 3}, {4}, {5, 6}, {7} };
  for ( int i = -5; i < 27; ++i )
    cout << numbers[0][i] << " ";
  cout << endl;
//  cout << numbers << endl;
//  cout << numbers[2] << endl;
//  for ( int i = 0; i < kRows; ++i ) {
//     InsertionSort(numbers[i], kCols);
//     PrintArray(numbers[i], kCols);
    //  for ( int j = 0; j < kCols; ++j ) {
    //    cout << numbers[i][j] << " ";
    //  }
    //  cout << endl;
//  }
  return 0;
}


/*
  const int kSize = 10;
  int numbers[kSize];
  Populate(numbers, kSize);
  InsertionSort(numbers, kSize);
  PrintArray(numbers, kSize);
  int find_me;
  cout << "What are you looking for? ";
  cin >> find_me;
  cout << BinarySearch(numbers, kSize, find_me) << endl;
  return 0;
}
*/
/*
  const int kSize = 100000;
  int numbers[kSize] = { 1, 3, -6, 10, 13 };
//  PrintArray(numbers, kSize);
  Populate(numbers, kSize, 1, 500000);
//  PrintArray(numbers, kSize);
  int start = clock();
  InsertionSort(numbers, kSize);
  cout << "Insertion sort took " << clock() - start << " clock ticks to "
       << "sort the array " << endl;
  start = clock();
  InsertionSort(numbers, kSize);
  cout << "Insertion sort took " << clock() - start << " clock ticks to "
       << "sort the array " << endl;

//  PrintArray(numbers, kSize);
  //Populate(numbers, kSize, 90);
  //PrintArray(numbers, kSize);
  //Populate(numbers, kSize, 5, -5);
  //PrintArray(numbers, kSize);
  return 0;
}*/
