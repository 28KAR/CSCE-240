// Copyright 2025 bhipp
// list of prototypes for reusable array functions written together in class
#ifndef ARRAY_FUNCTIONS_H_
#define ARRAY_FUNCTIONS_H_

// log(n) average case search on a sorted integer array
int BinarySearch(const int values[], int size, int lookin4);

void InsertionSort(int values[], int size);

// function to output all of the values in an array of integers
// printing the values should not change any of the values, so the array
// parameter is constant
void PrintArray(const int values[], int size, int width = 5);

// function to fill an array of integers with randomly generated values
// function will modify the values in the array - NO CONST
void Populate(int values[], int size, int low = 0, int high = 100);

#endif
