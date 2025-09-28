//  -------------------------------------  //
//  Copyright Katherine Asher Rogers 2025  //
//  -------------------------------------  //

// header guards - purpose is to avoid redefinition of the things defined
//                 in this file
#ifndef _MY_FUNCTIONS_H_
#define _MY_FUNCTIONS_H_
// write functions here

bool LeapYear(int);

int LastDayOfMonth(int, int = 0);

bool ValidDate(int, int, int);

void NextDate(int&, int&, int&);

void PreviousDate(int&, int&, int&);

#endif