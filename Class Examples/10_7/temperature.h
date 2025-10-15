// Copyright 2025 bhipp
// define a reusable Temperature class
// note: file name does not have to match class name
#ifndef TEMPERATURE_H_
#define TEMPERATURE_H_

#include<string>
using std::string;

// naming convention - user-defined types begin with capital letter
class Temperature {
 public:  // one space in front of public/protected/private
  Temperature();  // prototype for default constructor

  // accessor/getter
  // const qualifier after parameter list means that this function
  // will not change the object it's called on - it's a constant member function
  double GetValue() const { return value_; }
  string GetUnit() const { return unit_; }

  // mutator/setter
  void SetValue(double value);
  void SetUnit(string unit);

 private:
  // Google style guide - name private data members with trailing underscores
  double value_;
  string unit_;  // composition - object of one class as a data member
                 //               in another class (has-a relationship)
};  // semi-colon is required


#endif
