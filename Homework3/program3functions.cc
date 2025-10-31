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

    for (i = 0; i < size; i++) {    //replaces values to replace with -999 and counts them
        if (x[i] == -999)
            count++;
        if (x[i] == y) {
            x[i] = -999;
            count++;
        }
    }

    while (loop) { 
        for (i = 0; i < (size - 1); i++) {      //swaps -999 elements towards the back
            if (x[i] == -999) {
                x[i] = x[(i + 1)];
                x[(i + 1)] = -999;
            }
        }
        loop = false;
        for (i = (size-1); i > (size - (count +1)); i--) {      //checks if all -999 elements have been pushed to back
            if (x[i] != -999)
                loop = true;
        }
    }
}

void RemoveChars(char x[], char y, int z, bool q) {     //removeValue for characters

    if (y == '~')
        return;
    int i, count = 0;
    bool loop = true;

    for (i = 0; i < z; i++) {
        if (x[i] == y) {
            x[i] = '~';
        } else if (x[i] != '~') {
            count++;
        }
    }

    if (!q)
        return;

    while (loop) {
        for (i = 0; i < (z - 1); i++) {
            if ((x[i] == '~')) {
                x[i] = x[(i + 1)];
                x[(i + 1)] = '~';
            }
        }
        loop = false;
        for (i = 0; i < z; i++) {
            if ((i < count)&&(x[i] == '~'))
                loop = true;
        }
    }

    return;
}

void ShiftArray(int x[], int size, int y) {

    int carry, i, j;

    if (y > 0)
        for (i = 0; i < y; i++) {       //saves front variable

            carry = x[0];

            for (j = 0; j < (size - 1); j++) {  //swaps front back, and does the same until end

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

bool IsAnagram(const char x_alt[], const char y_alt[], bool case_sensitive) {

    bool loop = true;
    int i, count_x = 0, count_y = 0, size_x = 0, size_y = 0;

    for (i = 0; loop; i++) {        // counts x size
        if (x_alt[i])
            size_x++;
        else
            loop = false;
    }
    loop = true;
    for (i = 0; loop; i++) {    //counts y size
        if (y_alt[i])
            size_y++;
        else
            loop = false;
    }
    loop = true;

    char x[size_x];
    char y[size_y];

    for (i = 0; i < size_x; i++) {  //makes arrays usable
        x[i] = x_alt[i];
    }
    for (i = 0; i < size_y; i++) {
        y[i] = y_alt[i];
    }

    for (i = 0; i < size_x; i++) {      //removes excess characters, fixes case sensitivity
        if (!((('a' < x[i])&&(x[i] < 'z'))||(('A' < x[i])&&(x[i] < 'Z'))))
            RemoveChars(x, x[i], size_x);
        if ((!case_sensitive)&&(('a' < x[i])&&(x[i] < 'z')))
            x[i] -= 32;
    }
    RemoveChars(x, '_', size_x, true);
    for (i = 0; i < size_y; i++) {
        if (!((('a' < y[i])&&(y[i] < 'z'))||(('A' < y[i])&&(y[i] < 'Z'))))
            RemoveChars(y, y[i], size_y);
        if ((!case_sensitive)&&('a' < y[i])&&(y[i] < 'z'))
            y[i] -= 32;
    }
    RemoveChars(y, '_', size_y, true);

    while (loop) {      //sorts x
        for (i = 0; i < (size_x - 1); i++) {
            if (x[i] > x[(i+1)]) {
                char temp = x[i];
                x[i] = x[(i+1)];
                x[(i+1)] = temp;
            }
        }
        loop = false;
        for (i = 0; i < (size_x - 1); i++)
            if (x[i] > x[(i+1)])
                loop = true;
    }

    loop = true;

    while (loop) {  //sorts y
        for (i = 0; i < (size_y - 1); i++) {
            if (y[i] > y[(i+1)]) {
                char temp = y[i];
                y[i] = y[(i+1)];
                y[(i+1)] = temp;
            }
        }
        loop = false;
        for (i = 0; i < (size_y - 1); i++)
            if (y[i] > y[(i+1)])
                loop = true;
    }

    for (i = 0; i < size_x; i++)    //counts excess
        if (x[i] != '~')
            count_x++;

    for (i = 0; i < size_y; i++)
        if (y[i] != '~')
            count_y++;

    if (count_x != count_y)
        return false;
    for (i = 0; i < count_x ; i++) {    //tests for equality
        if (x[i] != y[i])
            return false;
    }
    
    return true;
}

bool Replace1With2(char x[], int size, char a, char b, char c) {

    int i, count_full = 0, count_a = 0;     //Counts the number of full array elements, and number of elements to be replaced
    for (i = 0; i < size; i++) {
        if (x[i]) {
            count_full++;
            if (x[i] == a)
                count_a++;
        }
    }

    if ((size - count_full) <= (count_a))   //Tests if array is too small
        return false;

    bool loop = true;
    while (loop) {
        loop = false;
        for (i = 0; i < size; i++) {        //checks for next element to replace, exists if none exist
            if ((x[i]) && (x[i] == a)) {
                count_a = i;
                loop = true;
            }
        }
        if (!loop)
            return true;
        for (i = (size-1); i > (count_a+1); i--) {  //shifts elements over
            if (x[(i-1)])
                x[i] = x[(i-1)];
        }
        x[count_a] = b;                       //replaces 1 element with 2
        x[count_a+1] = c;
        loop = true;
    }

    return true;

}

void SwapRowsAndColumns(int x[]) {

    return;

}