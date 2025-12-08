// Copyright 2025 bhipp
// test employee family of classes
#include<iostream>
using std::cout;
using std::endl;
#include<cstdlib>
#include<ctime>
#include"employee.h"
#include"salaried.h"
#include"hourly.h"
using CSCE240_Employees::Employee;
using CSCE240_Employees::SalariedEmployee;
using CSCE240_Employees::HourlyEmployee;

double Tax(const Employee& e, double rate) {
  return e.Pay() * rate;
}

int main() {
  srand(time(0));
//  Employee e;
  SalariedEmployee s("Sal", "Rea");
  HourlyEmployee h("Our", "Leigh");
  s.SetSalary(4000000);

//  e.Print();
  s.Print();
  cout << "35% tax: " << Tax(s, 0.35) << "\n\n\n";
  h.Print();
  cout << "20% tax: " << Tax(h, 0.2) << "\n\n";

  Employee * ptr;
  if ( rand() % 2 )
    ptr = &h;
  else
    ptr = &s;
  ptr->Print();
  return 0;
}


