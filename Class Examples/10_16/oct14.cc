// Copyright 2025 bhipp
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<string>
using std::string;
#include"temperature.h"
#include"forecast.h"

int main() {
  Forecast today(Temperature(20, "Celsius"), Temperature(75));
  today.Print();
}


/*
void IsItCold(Temperature t) {
  t.Convert("Fahrenheit");
  if ( t.GetValue() < 55 )
    cout << "It's cold" << endl;
  else
    cout << "It'sn't cold" << endl;
}

int main() {
  cout << Temperature::GetNumTemps() << endl;
  {
    Temperature today(30, "Celsius");
    cout << Temperature::GetNumTemps() << endl;
   IsItCold(today);
  // IsItCold(48);  // won't implicitly cast if we mark the constructor
                    // explicit
    //  IsItCold(Temperature(48));
    today.SetUnit("Fahrenheit").SetValue(75).Print();
    cout << today << endl;
  }
  cout << Temperature::GetNumTemps() << endl;
  return 0;
}
*/
/*
int main() {
  const Temperature t(0, "Celsius");
  const Temperature t2(32);
//  t2.Print();
  // = operator by default will do a member-wise copy of the data members
//  t2 = t;
  t2.Print();
  // operators can be overloaded as member of our class if their left (or only)
  // operand is an object of our class
  if ( t == t2 )  // t.operator == (t2)
    cout << "Same" << endl;
  else
    cout << "Different" << endl;

  Temperature difference;
  difference = t2 - t;
  differenct.Print();
  return 0;
}
*/

/*
int main() {
  Temperature t(100,"Celsius");
  t.Print();
  t.Convert("Fahrenheit");
  t.Print();
  t.Convert("Kelvin");
  t.Print();
  t.Convert("Celsius");
  t.Print();
  Temperature t2(80);
  t2.Print();
  // public static members are accessible on the class - don't need to have
  // an object
  Temperature::abbr = false;
  t.Print();
  t2.Print();
  return 0;
}
*/
/*
int main() {
  {
    const Temperature t;
    cout << t.GetValue() << " " << t.GetUnit() << endl;
    Temperature t3(5, "Celsius");
    cout << t3.GetValue() << " " << t3.GetUnit() << endl;
  }  // memory for t will be released - calls destructor
  Temperature t2(100);
  cout << t2.GetValue() << " " << t2.GetUnit() << endl;
  t2.SetValue(0);
  t2.SetUnit("Celsius");
  return 0;
}*/
