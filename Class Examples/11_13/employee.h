// Copyright 2025 CSCE240
// Define the Employee class
#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_

#include<iostream>
using std::ostream;
#include<string>
using std::string;

namespace CSCE240_Employees {

class Employee {
  friend ostream& operator << (ostream&, const Employee&);

 public:
  explicit Employee(string first = "Jane", string last = "Doe",
                     string job_title = "TBD", int ppy = 0);

  virtual ~Employee() { }

  void SetFirst(string f);
  void SetLast(string l);
  void SetJobTitle(string title);
  void SetPaysPerYear(int);

  string GetFirst() const { return first_name_; }
  string GetLast() const { return last_name_; }
  string GetJobTitle() const { return job_title_; }
  int GetPaysPerYear() const { return pays_per_year_; }

  virtual void Print() const;

  // Pay is a pure virtual function - turning Employee into an abstract class
  virtual double Pay() const = 0;

 private:
  string first_name_;
  string last_name_;
  string job_title_;
  int pays_per_year_;
};  // end class Employee

}  // namespace CSCE240_Employees

#endif  // _EMPLOYEE_H_
