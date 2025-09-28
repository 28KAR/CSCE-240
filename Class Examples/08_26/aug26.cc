// Copyright 2025 bhipp
#include<iostream>
using std::cout;
using std::endl;
using std::cin;

int main() {
  int next_age;
  cout << "hi, how old will you be on your next birthday? ";
  cin >> next_age;
  if ( next_age == 18 || next_age == 21 || next_age == 35 || next_age == 65 )
    cout << "Big Birthday!! (you will be eligible to do something new" << endl;


  if ( 28 >= next_age && next_age >= 14 ) {
    cout << "Gen Z!\n";
  } else {
    cout << "not Gen Z\n";
  }

  cout << "You're now " << next_age << " year"
       << (next_age == 1 ? "" : "s") << old.\nBye" << endl;
  return 0;
}
