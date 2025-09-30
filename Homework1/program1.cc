//  -------------------------------------  //
//  Copyright Katherine Asher Rogers 2025  //
//  -------------------------------------  //
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<cmath>
#include<iomanip>

int main() {

    int timesRead = 0, timeSeconds = 0, timeMinutes = 0 ,fastSeconds = 0, fastMinutes = 0, totalSeconds = 0, totalMinutes = 0, totalHours = 0;
    char quit = ' ';
    bool error = false;
    do {
        cin >> quit;
        if ((error == false)&&(quit != 'q')) {
            timesRead++;
            cin >> timeMinutes;
            cin.ignore(1, ':');
            cin >> timeSeconds;
            if ((timeMinutes > 59)||(timeSeconds > 59)||(timeMinutes < 0)||(timeSeconds < 0))
                error = true;
        } else {
            if (((fastMinutes == 0)&&(fastSeconds == 0)) || ((timeMinutes * 10) + timeSeconds) < ((fastMinutes * 10) + fastSeconds)) {
                fastMinutes = timeMinutes;
                fastSeconds = timeSeconds;
            }
            totalSeconds += timeSeconds;
            if (totalSeconds >= 60) {
                totalSeconds -= 60;
                totalMinutes++;
            }
            totalMinutes += timeMinutes;
            if (totalMinutes >= 60) {
                totalMinutes -= 60;
                totalHours++;
            }
        }
        timeMinutes = 0;
        timeSeconds = 0;
    } while (quit != 'q');

    if (error) {
        cout << "Input " << timesRead << " did not match expected format." << endl;
        cout << "Fastest and total running times are based on the first " << (timesRead - 1) << "valid times read." << endl;
    } else
        cout << timesRead << " valid times read." << endl;
    cout << "Fastest mile time: " << fastMinutes << ":" << fastSeconds << endl;
    if (totalHours > 0)
        cout << "Total running time: " << totalHours << ":" << totalMinutes << ":" << totalSeconds << endl;
    else
        cout << "Total running time: " << totalMinutes << ":" << totalSeconds << endl;

    return 0;

}