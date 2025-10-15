 // Copyright 2025 bhipp
// Implementations of the functions promised in arrayfunctions.h
#include"arrayfunctions.h"
#include<iostream>
using std::cout;
using std::endl;
#include<iomanip>
#include<cstdlib>

double Average(const int big_array[][kCols], int num_rows, char how,
               int which_one) {
  double sum = 0;
  if ( how == 'r' ) {
    if ( which_one < 0 || which_one >= num_rows )
      which_one = 0;
    for ( int i = 0; i < kCols; ++i )
      sum += big_array[which_one][i];
    sum /= kCols;
  } else if ( how == 'c' ) {
    if ( which_one < 0 || which_one >= kCols )
      which_one = 0;
    for ( int i = 0; i < num_rows; ++i )
      sum += big_array[i][which_one];
    sum /= num_rows;
  } else {
    for ( int i =0; i < num_rows; ++i )
      for ( int j = 0; j < kCols; ++j )
        sum += big_array[i][j];
    sum /= (num_rows * kCols);
  }
  return sum;
}

int BinarySearch(const int values[], int size, int lookin4) {
  int bottom = 0, top = size - 1;
  int middle = (bottom + top) / 2;
  while ( values[middle] != lookin4 && bottom < top ) {
    if ( values[middle] > lookin4 ) {
      top = middle - 1;
    } else {
      bottom = middle + 1;
    }
    middle = (bottom + top) / 2;
  }
  if ( values[middle] == lookin4 )
    return middle;
  return -1;
}


void InsertionSort(int values[], int size) {
  for ( int sorted = 1; sorted < size; ++sorted ) {
    int i = sorted;
    while ( i > 0 && values[i] < values[i - 1] ) {
      int temp = values[i];
      values[i] = values[i - 1];
      values[i - 1] = temp;
      --i;
    }
  }
}

void Populate(int values[], int size, int low, int high) {
  if ( low > high ) {
    int temp = low;
    low = high;
    high = temp;
  }
  for ( int i = 0; i < size; ++i )
    values[i] = low + rand() % (high - low + 1);
}

void PrintArray(const int values[], int size, int width) {
  for ( int i = 0; i < size; ++i )
    cout << std::setw(width) << values[i];
  cout << endl;
}
