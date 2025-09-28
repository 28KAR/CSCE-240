//  -------------------------------------  //
//  Copyright Katherine Asher Rogers 2025  //
//  -------------------------------------  //
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<cmath>  // includes useful mathematical functions
#include<iomanip>  // for functions to format our output
#include"program2functions.h"  // ignore cpplint error regarding file path

int main() {

    int month1, day1, year1, month2, day2, year2;

    cin >> month1 >> day1 >> year1 >> month2 >> day2 >> year2;

    if (!ValidDate(month1, day1, year1)) {

        cout << month1 << "/" << day1 << "/" << year1 << " is not a valid date" << endl;
        return 0;
        
    }
    if (!ValidDate(month2, day2, year2)) {

        cout << month2 << "/" << day2 << "/" << year2 << " is not a valid date" << endl;
        return 0;

    }
    
    int monthTrack = month1;
    int dayTrack = day1;
    int yearTrack = year1;

    int days = 0;

    while (!((monthTrack == month2)&&(dayTrack == day2)&&(yearTrack == year2))) {
        if ((yearTrack < year2) || ((yearTrack == year2) && (monthTrack < month2)) || ((yearTrack == year2) && (monthTrack < month2) && dayTrack < day2)) {

            days++;
            NextDate(monthTrack, dayTrack, yearTrack);

        }
        if ((yearTrack > year2) || ((yearTrack == year2) && (monthTrack > month2)) || ((yearTrack == year2) && (monthTrack > month2) && dayTrack > day2)) {

            days--;
            PreviousDate(monthTrack, dayTrack, yearTrack);
            
        }
    }

    if (days < 0)
        cout << month1 << "/" << day1 << "/" << year1 << " is " << (days*(-1)) << " days after " << month2 << "/" << day2 << "/" << year2 << endl;
    else
        cout << month1 << "/" << day1 << "/" << year1 << " is " << (days) << " days before " << month2 << "/" << day2 << "/" << year2 << endl;

    return 0;

}