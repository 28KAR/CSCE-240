// Copyright 2025 bhipp
// prototypes for our user defined functions
// .h extension for a header file
// header files typically contain definitions of variables, constants,
// types (structures, classes) and prototypes
// header files are included (we won't compile header files)

// header guards - purpose is to avoid redefinition of the things defined
//                 in this file
#ifndef _MY_FUNCTIONS_H_
#define _MY_FUNCTIONS_H_

// write a factorial function
int Factorial(int);   // prototype - note: parameter names not required

// average function to return the average of 3 integers
double Average(int a, int b, int c);

#endif
