// Copyright 2025 bhipp
// Implementations for the Forecast class functions
#include"forecast.h"
#include<iostream>
using std::cout;
using std::endl;
#include"temperature.h"

Forecast::Forecast(const Temperature& t1, const Temperature& t2) :
                                               low_(t1), high_(t2) {
  if ( high_ < low_ ) {
    low_ = t2;
    high_ = t1;
  }
  low_.Convert(high_.GetUnit());
}

void Forecast::Print() const {
  cout << "Low: " << low_ << " High: " << high_ << endl;
}
