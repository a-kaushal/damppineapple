/*
6.32 LAB: Leap year - functions

A year in the modern Gregorian Calendar consists of 365 days. In reality, the earth takes longer to rotate around the sun. To account for the difference in time, every 4 years, a leap year takes place. A leap year is when a year has 366 days: An extra day, February 29th. The requirements for a given year to be a leap year are:

1) The year must be divisible by 4

2) If the year is a century year (1700, 1800, etc.), the year must be evenly divisible by 400

Some example leap years are 1600, 1712, and 2016.

Write a program that takes in a year and determines whether that year is a leap year.

Ex: If the input is:

1712

the output is:

1712 is a leap year. 

Ex: If the input is:

1913

the output is:

1913 is not a leap year.

Your program must define and call the following function. The function should return true if the input year is a leap year and false otherwise.
bool IsLeapYear(int userYear)
*/

#include <iostream>
using namespace std;

bool IsLeapYear(int userYear) {
    if (userYear % 100 == 0) {
        if (userYear % 400 == 0) {
            return true;
        }
        else {
            return false;
        }
    }
    else if (userYear % 4 == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int userYear;
    int leapYear;

    cin >> userYear;

    leapYear = IsLeapYear(userYear);

    if (leapYear == false) {
        cout << userYear << " is not a leap year." << endl;
    }
    else {        
        cout << userYear << " is a leap year." << endl;
    }

   return 0;
}
