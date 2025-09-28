// Copyright 2025 bhipp
// More function tests (of functions from somefunctions.h) and
// function topics!
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<ctime>  // clock()   time(0) = returns current time in seconds
#include<cstdlib>  // rand()  srand(num)
#include"somefunctions.h"

int main() {
  srand(time(0));

  for ( int i = 0; i < 10; ++i )
    cout << Roll(20) << endl;

/*
  cout << rand() << endl;

  cout << ProgramAverage(5, 5, 5) << "\n" << ProgramAverage(5, 4, 5, 4.5)
       << "\n" << ProgramAverage(5, 5, 5, 5, 5) << "\n"
       << ProgramAverage(5, 5, 5, 5, 5, 5) << endl;



  cout << static_cast<int>('A') << endl;
  cout << Average(7.4, 4.5) << "\n" << Average('a','c') << endl;
  cout << Average(static_cast<char>(65), 70) << endl;

  cout << CLOCKS_PER_SEC << endl;
  int n, start, total;
  cout << "Enter an integer ";
  cin >> n;
  bool prime;
  start = clock();
  prime = IsPrime(n);
  total = clock() - start;
  cout << "IsPrime(" << n << ") took " << total << " clock ticks" << endl;

  cout << sizeof(int) << endl;
  cout << sizeof(float) << endl;
  cout << sizeof(double) << endl;
  char x = 'a';
  cout << sizeof(x) << endl;
  cout << clock() << endl;
*/
  return 0;
}

