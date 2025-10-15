// Copyright 2025 bhipp
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<string>
using std::string;
#include"temperature.h"

int main() {
  const Temperature t;
  cout << t.GetValue() << " " << t.GetUnit() << endl;
  return 0;
}




/*
int main() {
  Temperature t;  // declaring variable t of the Temperature class type
  cout << t.value << " " << t.unit << endl;
  t.value = 68;
  t.unit = "Fahrenheit";
  cout << t.value << " degrees " << t.unit << endl;
  
  Temperature this_weeks_highs[7];

  Temperature * tptr = &t;
  cout << (*tptr).value << endl;
  // can use the arrow operator on pointers/references to do the same
  // as the statement above
  cout << tptr->value << endl;
  return 0;
}




/*
int main() {
  // declaring an object of the string class, named mystring
  string mystring;  // calls the default constructor (constructor that
                    // can be called with no arguments) to set up the
                    // object
  mystring = "how are you?";  // assignment operator is overloaded to work
                              // on string objects
  cout << mystring << endl;  // << operator overloaded
  cout << mystring[1] << endl;  // [] operator overloaded
  cout << mystring.length() << endl;  // length member function call on 
                                      // the mystring object
  cout << "Enter a new word: ";
  cin >> mystring;  // >> operator overloaded!
  cout << "Here it is: " << mystring << endl;
  cout << mystring.length() << endl;
  cout << mystring[mystring.length()+10] << endl;
  return 0;
} */
