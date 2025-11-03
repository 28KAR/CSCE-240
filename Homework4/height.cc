//  -------------------------------------  //
//  Copyright Katherine Asher Rogers 2025  //
//  -------------------------------------  //
#include"height.h"
#include<iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;
using std::ostream;

bool Height::SetValue(double a) {       //  Setter for value

    if (a < 0)
        return false;
    value = a;
    return true;

}

double Height::GetValue() const {       //  Accessor for value

    return value;

}

bool Height::SetUnits(string a) {       //  Setter for units

    if ((a != "inches") && (a != "feet") && (a != "centimeters") && (a != "meters"))
        return false;
    units = a;
    return true;

}

string Height::GetUnits() const {       //  Accessor for units

    return units;

}

double Height::GetMeterValue() const {      //  Returns value converted to meters for easy comparison

    if (units == "inches")
        return (double)(value * 0.0254);
    if (units == "feet")
        return (double)(value * 0.3048);
    if (units == "centimeters")
        return (double)(value / 100);
    return (double)value;

}

void Height::ConvertUnits(string a) {       //  Checks value type and converts it to listed type

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

Height::Height(double a, string b) {        //  Constructor

    if (a < 0)
        value = 0;
    else
        value = a;
    if ((b != "inches") && (b != "feet") && (b != "centimeters") && (b != "meters"))
        units = "feet";
    else
        units = b;

}

ostream& operator << (ostream& where, const Height& h)      //  Overloads for printing Height
{

    where << h.GetValue() << " " << h.GetUnits();
    return where;

}
