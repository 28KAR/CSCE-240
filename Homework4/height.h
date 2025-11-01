//  -------------------------------------  //
//  Copyright Katherine Asher Rogers 2025  //
//  -------------------------------------  //
#ifndef PROGRAM3FUNCTIONS_H_
#define PROGRAM3FUNCTIONS_H_

class Height {
private:
    double value;
    string units;

public:

    bool SetValue(double a)
    double GetValue()
    bool SetUnits(string a)
    string GetUnits()
    void ConvertUnits(string a)
    Height()
    Height(double a, string b)
    friend ostream& operator<<(ostream&, Height& h)

#endif