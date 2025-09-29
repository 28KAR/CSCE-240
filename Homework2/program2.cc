//  -------------------------------------  //
//  Copyright Katherine Asher Rogers 2025  //
//  -------------------------------------  //
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<cmath>
#include<iomanip>
#include"program2functions.h"

int main() {
    // Creates date variables and calls you to set them
    int month1, day1, year1, month2, day2, year2;

    cin >> month1;
    cin.ignore(1, '/');
    cin >> day1;
    cin.ignore(1, '/');
    cin >> year1;
    cin.ignore(1, ' ');
    cin >> month2;
    cin.ignore(1, '/');
    cin >> day2;
    cin.ignore(1, '/');
    cin >> year2;
    
    // Tests if dates are valid, states if they are, and exits if so
    bool end = false;
    if (!ValidDate(month1, day1, year1)) {

        cout << month1 << "/" << day1 << "/" << year1 << " is not a valid date" << endl;
        end = true;
        
    }
    if (!ValidDate(month2, day2, year2)) {

        cout << month2 << "/" << day2 << "/" << year2 << " is not a valid date" << endl;
        end = true;

    }
    if (end)
        return 0;
    
    // checks if date1 is > or < date2, then counts up or down to find the days of difference
    int monthTrack = month1;
    int dayTrack = day1;
    int yearTrack = year1;
    int days = 0;
    while (!((monthTrack == month2)&&(dayTrack == day2)&&(yearTrack == year2))) {
        if ((yearTrack < year2) || ((yearTrack == year2) && (monthTrack < month2)) || ((yearTrack == year2) && (monthTrack == month2) && dayTrack < day2)) {

            days++;
            NextDate(monthTrack, dayTrack, yearTrack);

        } else if ((yearTrack > year2) || ((yearTrack == year2) && (monthTrack > month2)) || ((yearTrack == year2) && (monthTrack == month2) && dayTrack > day2)) {

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