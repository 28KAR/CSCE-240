// Copyright 2025 bhipp
// define a reusable Temperature class
// note: file name does not have to match class name
#ifndef TEMPERATURE_H_
#define TEMPERATURE_H_

#include<string>
using std::string;
#include<iostream>
using std::ostream;

// naming convention - user-defined types begin with capital letter
class Temperature {
  // cout << x << " " << y << endl;
  friend ostream& operator << (ostream&, const Temperature&);

 public:  // one space in front of public/protected/private
  // explicit makes it so that the compiler won't implicitly cast
  // values/variables of numeric types as Temperatures
  explicit Temperature(double = 75, string = "Fahrenheit");
  // prototype for default constructor

  // copy constructor
  Temperature(const Temperature& tocopy);

  // destructor - function that is called when memory for an object is released
  // no return type, name is ~name of class, empty parameter list -
  // can't be overloaded
  ~Temperature();

  // accessor/getter
  // const qualifier after parameter list means that this function
  // will not change the object it's called on - it's a constant member function
  double GetValue() const { return this->value_; }
  string GetUnit() const { return unit_; }

  void Print() const;

  void Convert(string new_unit);

  bool operator == (Temperature right) const;
  bool operator < (Temperature right) const;

  // the returned Temperature will have the same units as the
  // left operand
  Temperature operator - (Temperature right) const;

  // mutator/setter
  // returns a reference to the object that the function was called
  // allowing for "cascading" function calls (see the main)
  Temperature& SetValue(double value);
  Temperature& SetUnit(string unit);

  static bool abbr;  // true to display unit as abbreviations (C,F,K)
                     // false to display as full string

  // we don't use the const qualifier on static functions
  // because it applies to the non-static members (won't change the
  // OBJECT its called on)
  static int GetNumTemps() { return num_temps_; }

 private:
  // Google style guide - name private data members with trailing underscores
  double value_;
  string unit_;  // composition - object of one class as a data member
                 //               in another class (has-a relationship)

  static int num_temps_;
};  // semi-colon is required


#endif
