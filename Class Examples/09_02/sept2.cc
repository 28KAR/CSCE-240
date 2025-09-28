// Copyright 2025 bhipp
// Introduction to functions
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<cmath>  // includes useful mathematical functions
#include<iomanip>  // for functions to format our output
#include"myfunctions.h"  // ignore cpplint error regarding file path

int main() {
  int num;
  cout << "Enter a non-negative integer ";
  cin >> num;
  cout << num << "! = " << Factorial(num) << endl;
  return 0;
}





/*
int main() {
  // double pow(double, double);   prototype
  // return type = double
  // parameters  = double, double
  // signature = pow(double, double) 
  cout << pow(5, 0.5) << endl;

  double x, y;
  cout << "Enter two numbers ";
  cin >> x >> y;
  cout << x << "^" << y << " = " << pow(x, y) << endl;

  // double sqrt(double);
  cout << sqrt(y) << endl;

  cout << std::setiosflags(std::ios::fixed);  // fixed instead of scientific
                                              // so the setprecision will be
                                              // places after the decimal
  cout << std::setprecision(2);
  cout << std::setw(10) << x << "\n" << std::setw(10) << y << endl; 

  return 0;
}
*/


