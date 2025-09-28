// Copyright 2025 bhipp
// test the functions written in somefunctions.cc
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
// ignore cpplint error messages about using complete path
#include"somefunctions.h"

int main() {
//  for ( int i = -3; i < 26; ++i )
//    cout << i << (IsPrime(i) ? " is prime!" : " is not prime") << endl;
//  for ( char c = 'A'; c <= 'z'; ++c )
//    cout << c << " is " << (IsVowel(c) ? "a vowel" : "not a vowel") << endl;
//  for ( int i = -150; i < 99999; i += 93 )
//    cout << i << " sum of digits is " << SumOfDigits(i) << endl;
//  int x = -14078;
//  cout << SumOfDigits(x) << endl;
//  cout << x << endl;
  double a, b, c, r1 = 0, r2 = 0;
  cin >> a >> b >> c;
  cout << QuadRoots(a, b, c, r1, r2) << endl;
  cout << r1 << " " << r2 << endl;
  return 0;
}









