// Copyright 2025 bhipp
// define a Forecast class
#ifndef FORECAST_H_
#define FORECAST_H_

#include"temperature.h"

class Forecast {
 public:
  Forecast(const Temperature& t1, const Temperature& t2);

  void Print() const;

 private:
  Temperature low_;
  Temperature high_;
};


#endif
