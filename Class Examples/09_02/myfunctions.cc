// Copyright 2025 bhipp
// contains implementations of functions with prototypes in myfunctions.h
#include"myfunctions.h"  // ignore cpplint error regarding file path
                         // style - use "" for user defined headers
                         //         and <> for standard library headers

double Average(int a, int b, int c) {
  return (a + b + c) / 3.0;
}


int Factorial(int n) {
  int answer = 1;
  while ( n > 0 ) {
    answer *= n;
    --n;
  }
  return answer;
}
