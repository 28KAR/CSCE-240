// Copyright 2025 bhipp
// implementations of the member functions for the Temperature class
#include"temperature.h"
#include<string>
using std::string;
#include<iostream>
using std::cout;
using std::endl;

// initialize static data members with the class
bool Temperature::abbr = true;
int Temperature::num_temps_ = 0;

ostream& operator << (ostream& whereto, const Temperature& t) {
  whereto << t.value_;
  if ( Temperature::abbr ) {
    if ( t.unit_[0] != 'K' )
      whereto << "\u00B0";
    whereto << t.unit_[0];
  } else {
    whereto << " degrees " << t.unit_;
  }
  return whereto;
}


Temperature Temperature::operator - (Temperature right) const {
  right.Convert(unit_);  // get the right temp in the units of the left temp
  return Temperature(value_ - right.value_, unit_);
}


// making the right parameter a value parameter so that I can modify
// the copy without changing the original
bool Temperature::operator == (Temperature right) const {
  right.Convert(unit_);  // this changes the copy to the left's units
  return value_ == right.value_;  // now that their in the same units,
                                  // compare values
}

bool Temperature::operator < (Temperature right) const {
  right.Convert(unit_);
  return value_ < right.value_;
}


void Temperature::Convert(string new_unit) {
  if ( unit_ == "Fahrenheit" ) {
    if ( new_unit == "Celsius" ) {
      value_ = (value_ - 32) * 5 / 9.0;
      unit_ = new_unit;
    } else if ( new_unit == "Kelvin" ) {
      value_ = (value_ - 32) * 5 / 9.0 + 273.15;
      unit_ = new_unit;
    }
  } else if ( unit_ == "Celsius" ) {
    if ( new_unit == "Fahrenheit" ) {
      value_ = value_ * 9 / 5.0 + 32;
      unit_ = new_unit;
    } else if ( new_unit == "Kelvin" ) {
      value_ += 273.15;
      unit_ = new_unit;
    }
  } else if ( unit_ == "Kelvin" ) {
    if ( new_unit == "Fahrenheit" ) {
      value_ = (value_ - 273.15) * 9 / 5.0 + 32;
      unit_ = new_unit;
    } else if ( new_unit == "Celsius" ) {
      value_ -= 273.15;
      unit_ = new_unit;
    }
  }
}


void Temperature::Print() const {
  cout << value_;
  if ( abbr && unit_ != "Kelvin")
    cout << "\u00B0";
  if ( abbr )
    cout << unit_[0] << endl;
  else
    cout << " degrees " << unit_ << endl;
}


Temperature::~Temperature() {
//  cout << "Destructor called for " << value_ << " " << unit_ << endl;
  --num_temps_;
}

// when we implement a member function outside of teh class definition
// we must state that it's coming from the class using the scope
// resolution operator
Temperature::Temperature(double value, string unit) {
  value_ = 75;
  unit_ = "Fahrenheit";
  SetUnit(unit);
  SetValue(value);
  ++num_temps_;
}

// we didn't have to write this unit we needed something different/
// additional to a member-wise copy to occur
Temperature::Temperature(const Temperature& tocopy) :
     value_(tocopy.value_), unit_(tocopy.unit_) {
  ++num_temps_;
}


Temperature& Temperature::SetUnit(string unit) {
  if ( unit[0] == 'c' || unit[0] == 'C' )
    unit_ = "Celsius";
  if ( unit[0] == 'f' || unit[0] == 'F' )
    unit_ = "Fahrenheit";
  if ( unit[0] == 'k' || unit[0] == 'K' )
    unit_ = "Kelvin";
  return *this;  // this is a pointer, return the dereferenced pointer
}


Temperature& Temperature::SetValue(double value) {
  if ( unit_ == "Kelvin" && value >= 0 )
    value_ = value;
  if ( unit_ == "Celsius" && value >= -273.15 )
    value_ = value;
  if ( unit_ == "Fahrenheit" && value >= -459.67 )
    value_ = value;
  return *this;
}






