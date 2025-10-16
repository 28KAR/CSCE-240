//  -------------------------------------  //
//  Copyright Katherine Asher Rogers 2025  //
//  -------------------------------------  //
#include"program3functions.h"
#include<iostream>
using std::cout;
using std::endl;

void RemoveValues(int x[], int size, int y) {

    int count = 0;
    bool loop = true;
    int i;

    for (i = 0; i < size; i++) {
        if (x[i] == -999)
            count++;
        if (x[i] == y) {
            x[i] = -999;
            count++;
        }
    }

    while (loop) {
        for (i = 0; i < (size - 1); i++) {
            if (x[i] == -999) {
                x[i] = x[(i + 1)];
                x[(i + 1)] = -999;
            }
        }
        loop = false;
        for (i = (size-1); i > (size - (count +1)); i--) {
            if (x[i] != -999)
                loop = true;
        }
    }
}

void ShiftArray(int x[], int size, int y) {

    int carry, i, j;

    if (y > 0)
        for (i = 0; i < y; i++) {

            carry = x[0];

            for (j = 0; j < (size - 1); j++) {

                x[j] = x[(j + 1)];

            }

            x[(size - 1)] = carry;
    
        }
    if (y < 0)
        for (i = y; i < 0; i++) {

            carry = x[(size - 1)];

            for (j = (size - 1); j > 0; j--) {

                x[j] = x[(j - 1)];

            }

            x[0] = carry;
    
        }

}

bool isAnagram(char x[], char y[], bool case_sensitive){

    int i, countx = 0, county = 0;
    int x_size = sizeof(x) / sizeof(x[0]);
    int y_size = sizeof(y) / sizeof(y[0]);
    for (i = 0; i < x_size, i++)
        if (((x[i] > 'a')&&(x[i] < 'z'))||((x[i] > 'A')&&(x[i] < 'Z')))
            countx++;
    for (i = 0; i < y_size, i++)
        if (((y[i] > 'a')&&(y[i] < 'z'))||((y[i] > 'A')&&(y[i] < 'Z')))
            county++;

    if (countx != county)
        return false;

    char x_alt[countx];
    char y_alt[county];
    countx = 0;
    county = 0;
    char temp;
    bool loop = true;

    for (i = 0; i < x_size, i++) {
        if (case_sensitive) {
            if (((x[i] >= 'a')&&(x[i] <= 'z'))||(x[i] >= 'A')&&(x[i] <= 'Z')) {
                x_alt[countx] = (x[i]);
                countx++;
            }
        } else {
            if ((x[i] >= 'a')&&(x[i] <= 'z')) {
                x_alt[countx] = (x[i] -32);
                countx++;
            }
            if ((x[i] >= 'A')&&(x[i] <= 'Z')) {
                x_alt[countx] = (x[i]);
                countx++;
            }
        }
    }
    for (i = 0; i < y_size, i++) {
        if (case_sensitive) {
            if (((y[i] >= 'a')&&(y[i] <= 'z'))||(y[i] >= 'A')&&(y[i] <= 'Z')) {
                y_alt[county] = (y[i]);
                county++;
            }
        } else {
            if ((y[i] >= 'a')&&(y[i] <= 'z')) {
                y_alt[county] = (y[i] -32);
                county++;
            }
            if ((y[i] >= 'A')&&(y[i] <= 'Z')) {
                y_alt[county] = (x[i]);
                county++;
            }
        }
    }
    while (loop) {
        for (i = 0; i < (countx - 1); i++) {
            if (x_alt[i] > x_alt[(i+1)]) {
                temp = x_alt[1];
                x[i] = x[(i+1)];
                x[(i+1)] = temp;
            }
        }
        loop = false;
        for (i = 0; i < (countx - 1); i++) {
            if (x[i] > x[(i+1)])
                loop = true;
        }
    }
    while (loop) {
        for (i = 0; i < (county - 1); i++) {
            if (y_alt[i] > y_alt[(i+1)]) {
                temp = y_alt[1];
                y[i] = y[(i+1)];
                y[(i+1)] = temp;
            }
        }
        loop = false;
        for (i = 0; i < (county - 1); i++) {
            if (y[i] > y[(i+1)])
                loop = true;
        }
    }
    return equal(begin(x_alt), end(x_alt), begin(y_alt));
}