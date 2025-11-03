//  -------------------------------------  //
//  Copyright Katherine Asher Rogers 2025  //
//  -------------------------------------  //
#ifndef height_H_
#define height_H_

#include <string>
using std::string;
#include <iostream>
using std::ostream;

class Height {
private:

    double value;
    string units;


public:

    bool SetValue(double a);
    double GetValue() const;
    bool SetUnits(string a);
    string GetUnits() const;
    double GetMeterValue() const;
    void ConvertUnits(string a);
    Height(double a = 0, string b = "feet");
    friend ostream& operator << (ostream& where, const Height& h);

};

#endif