// Copyright 2025 bhipp
// header file with the prototypes for user-defined functions created
// in class on 9/4

// we'll ignore cpplint messages about the full path in these header guards
#ifndef SOMEFUNCTIONS_H_
#define SOMEFUNCTIONS_H_

// QuadRoots will find the real roots of a quadratic polynomials
// ax^2 + bx + c
// ignore cpplint error messages about non-const reference
int QuadRoots(double a, double b, double c, double& root1, double& root2);

// IsPrime function will take an integer argument and return whether or not
// the value is a prime number
bool IsPrime(int);
  // signature: IsPrime(int)
  // parameters: int
  // return type: bool

bool IsVowel(char);

int SumOfDigits(int);

#endif










