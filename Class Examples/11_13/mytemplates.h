// Copyright 2025
// my template functions

#ifndef MYTEMPLATES_H_
#define MYTEMPLATES_H_

template<class T>
void PrintArray(const T the_array[], int size) {
  for ( int i = 0; i < size; ++i )
    cout << the_array[i] << " ";
  cout << endl;
}

#endif