// Copyright 2025 bhipp
// implementations of the member functions for the Temperature class
#include"temperature.h"
#include<string>
using std::string;

// when we implement a member function outside of teh class definition
// we must state that it's coming from the class using the scope
// resolution operator
Temperature::Temperature() {
  value_ = 70;
  unit_ = "Farenheit";
}

void Temperature::SetUnit(string unit) {
  if ( unit[0] == 'c' || unit[0] == 'C' )
    unit_ = "Celsius";
  if ( unit[0] = 'f' || unit[0] == 'F' )
    unit_ = "Fahrenheit";
  if ( unit[0] == 'k' || unit == 'K' )
    unit_ = "Kelvin";
}


void Temperature::SetValue(double value) {
  if ( unit_ == "Kelvin" && value >= 0 )
    value_ = value;
  if ( unit_ == "Celsius" && value >= -273.15 )
    value_ = value;
  if ( unit_ == "Fahrenheit" && value >= -459.67 )
    value_ = value;
}






