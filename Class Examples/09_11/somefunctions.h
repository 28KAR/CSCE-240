// Copyright 2025 bhipp
// header file with the prototypes for user-defined functions created
// in class on 9/4

// we'll ignore cpplint messages about the full path in these header guards
#ifndef SOMEFUNCTIONS_H_
#define SOMEFUNCTIONS_H_

void TowerSolution(int disks = 3, int start = 1, int end = 3);


// greatest common divisor
int GCD(int n, int m);


int Factorial(int);  // recursive version
int FactorialI(int);  // iterative version

int Fibonacci(int);  // recursive definition


// roll a die
int Roll(int sides = 6);


// program assignment average
// default arguments - arguments to use for parameters left of the end
// of the parameter list
// default arguments only listed in function prototype
double ProgramAverage(double, double, double, double = 0,
                      double = 0, double = 0);


// function to return the average of two real numbers
double Average(double, double);

// here we're overloading the Average function - same name, distinct parameter
// list (every function needs a distinct signature)
// function to return the average of two characters
char Average(char, char);


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










