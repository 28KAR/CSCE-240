//  -------------------------------------  //
//  Copyright Katherine Asher Rogers 2025  //
//  -------------------------------------  //
#include"height.h"
#include<iostream>
#include <string>
using std::cout;
using std::endl;
using namespace std;

class Height {
private:
    double value;
    string units;

public:

    bool SetValue(double a) {

        if (a < 0)
            return false;
        value = a;
        return true;

    }
    double GetValue() {

        return value;

    }

    bool SetUnits(string a) {

        if ((a != "inches") && (a != "feet") && (a != "centimeters") && (a != "meters"))
            return false;
        units = a;
        return true;

    }
    string GetUnits() {

        return units;

    }
    void ConvertUnits(string a) {

        if (a == units)
        return;

        if (units == "inches") {

            if (a == "feet")
                value /= 12;
            if (a == "centimeters")
                value *= 2.54;
            if (a == "meters")
                value *= 0.0254;
            units = a;
            return;

        }
        if (units == "feet") {

            if (a == "inches")
                value *= 12;
            if (a == "centimeters")
                value *= 30.48;
            if (a == "meters")
                value *= 0.3048;
            units = a;
            return;

        }
        if (units == "centimeters") {

            if (a == "inches")
                value /= 2.54;
            if (a == "feet")
                value /= 30.48;
            if (a == "meters")
                value /= 100;
            units = a;
            return;

        }
        if (units == "meters") {

            if (a == "inches")
                value /= 0.0254;
            if (a == "feet")
                value /= 0.3048;
            if (a == "centimeters")
                value *= 100;
            units = a;
            return;

        }

        return;

    }

    Height() {

        value = 0;
        units = "feet";

    }
    Height(double a, string b) {

        if (a < 0)
            value = 0;
        else
            value = a;
        if ((b != "inches") && (b != "feet") && (b != "centimeters") && (b != "meters"))
            units = "feet";
        else
            units = b;

    }

    friend ostream& operator<<(ostream&, Height& h)
    {
        cout << h.value << " " << h.units;
        return cout;
    }

};