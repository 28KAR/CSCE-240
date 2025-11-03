//  -------------------------------------  //
//  Copyright Katherine Asher Rogers 2025  //
//  -------------------------------------  //
#include"heightrange.h"
#include<iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;
using std::ostream;

void HeightRange::SetShortest(const Height& h) {        //  Setter for smallestHeight

    if (h.GetMeterValue() < largestHeight.GetMeterValue())
        smallestHeight = h;
    return;

}
Height HeightRange::GetShortest() const {       //  Accessor for smallestHeight

    return smallestHeight;

}
void HeightRange::SetTallest(const Height& h) {     //  Setter for largestHeight

    if (h.GetMeterValue() > smallestHeight.GetMeterValue())
        largestHeight = h;
    return;

}
Height HeightRange::GetTallest() const {    //Accessor for largestHeight

    return largestHeight;

}
HeightRange::HeightRange() {        //  Default contructor

    Height h1, h2;

    smallestHeight = h1;
    largestHeight = h2;

}
HeightRange::HeightRange(Height a) {        //  Constructor for one Height

    Height h1;
    
    largestHeight = a;
    smallestHeight = h1;

}
HeightRange::HeightRange(Height a, Height b) {      //  Contructor for two Heights

    if ( a.GetMeterValue() > b.GetMeterValue() ) {
    
        largestHeight = a;
        smallestHeight = b;

    } else {
    
        largestHeight = b;
        smallestHeight = a;

    }

}
bool HeightRange::InRange(const Height& a, bool b) {        //  Determines if height is within the smallest and largets heights

    if (b)      //  Including Edges
        if ((a.GetMeterValue() >= smallestHeight.GetMeterValue()) && (a.GetMeterValue() <= largestHeight.GetMeterValue()))
            return true;
        else
            return false;
    else        //  Not Including Edges
        if ((a.GetMeterValue() > smallestHeight.GetMeterValue()) && (a.GetMeterValue() < largestHeight.GetMeterValue()))
            return true;
        else
            return false;
    
}
Height HeightRange::Width() {       //  Difference in smallest & largest outputed. UNSURE WHY FAILING, RETURNS FAIR VALUES!!!

    Height h1((double)(largestHeight.GetMeterValue() - smallestHeight.GetMeterValue()), "meters");
    h1.ConvertUnits(largestHeight.GetUnits());
    cout << h1.GetValue() << " " << h1.GetUnits() << " - ";
    return h1;

}