// Copyright 2025 bhipp
// Implementations of the functions with prototypes in somefunctions.h
// style preference: use <> for standard library includes
//                   use "" for user defined headers
// IGNORE cpplint error message about using full path to the file
#include"somefunctions.h"
#include<cmath>
#include<cstdlib>

int Roll(int sides) {
  if ( sides < 1 )
    return 0;
  return rand() % sides + 1;
}


double ProgramAverage(double p1, double p2, double p3, double p4,
                      double p5, double p6) {
  double min = p1;
  if ( p2 < min ) min = p2;
  if ( p3 < min ) min = p3;
  if ( p4 < min ) min = p4;
  if ( p5 < min ) min = p5;
  if ( p6 < min ) min = p6;
  return (p1 + p2 + p3 + p4 + p5 + p6 - min) / 5;
}

double Average(double n1, double n2) {
  return (n1 + n2) / 2;
}

char Average(char c1, char c2) {
  return (c1 + c2) / 2;
}


// QuadRoots will find the real roots of a quadratic polynomials
// ignore cpplint error messages about non-const reference
int QuadRoots(double a, double b, double c, double& root1, double& root2) {
  // ( -b +/- sqrt(b^2 - 4ac) ) / (2a)
  double disc = b * b - 4 * a * c;
  if ( disc < 0 )
    return 0;
  if ( disc == 0 ) {
    root1 = -1 * b / (2 * a);
    return 1;
  }
  root1 = (-1 * b + sqrt(b * b - 4 * a * c) ) / (2 * a);
  root2 = (-1 * b - sqrt(b * b - 4 * a * c) ) / (2 * a);
  return 2;
}



// all of these functions are using value parameters (call-by-value)
int SumOfDigits(int n) {
  if ( n < 0 )   // n = abs(n);
    n *= -1;
  int sum = 0;
  while ( n > 0 ) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

bool IsVowel(char c) {
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
         c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

bool IsPrime(int n) {
  if ( n < 2 )
    return false;
  bool foundDivisor = false;
  for ( int i = 2; i <= sqrt(n) && !foundDivisor; ++i )
    foundDivisor = (n % i == 0);

  return !foundDivisor;
}
