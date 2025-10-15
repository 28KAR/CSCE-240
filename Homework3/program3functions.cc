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
    int i = 0;

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


    return false;
}