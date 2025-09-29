//  -------------------------------------  //
//  Copyright Katherine Asher Rogers 2025  //
//  -------------------------------------  //

#include"program2functions.h"

bool LeapYear(int year) {
    // Checks if the year is a leap year
    return ((year > 0) && (((year % 400) == 0) || (!((year % 100) == 0) && ((year % 4) == 0))));

}

int LastDayOfMonth(int month, int year) {
    // Finds the last day of the month, checking for a leap year if the month is February
    if ((month < 1) || (month > 12) || ((month == 2) && (year <= 0)))
        return 0;

    if ((month == 2)) {
        if (LeapYear(year))
            return 29;
        return 28;
    }

    if (((month <= 7) && !((month % 2) == 0)) || ((month >= 8) && ((month % 2) == 0)))
        return 31;
    return 30;

}

bool ValidDate(int month, int day, int year) {
    // Checks if the date is valid
    return ((year > 0) && (day > 0) && (day <= LastDayOfMonth(month, year)));

}

void NextDate(int& month, int& day, int& year) {
    // Checks if the date is valid, then moves the date 1 day forward
    if (ValidDate(month, day, year)) {
        if (day == LastDayOfMonth(month, year)) {
            if (month == 12) {

                month = 1;
                day = 1;
                year++;
                return;
                
            }

            month++;
            day = 1;
            return;

        }

        day++;
        return;

    }

    return;

}

void PreviousDate(int& month, int& day, int& year) {
    // Checks if the date is valid, then moves the date 1 day backwards
    if (ValidDate(month, day, year)) {
        if (day == 1) {
            if (month == 1) {

                month = 12;
                day = 31;
                year--;
                return;
                
            }

            month--;
            day = LastDayOfMonth(month, year);
            return;

        }

        day--;
        return;

    }

    return;

}