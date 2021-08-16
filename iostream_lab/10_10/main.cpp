/* 
10.10 LAB: Parsing dates

Complete main() to read dates from input, one date per line. Each date's format must be as follows: March 1, 1990. Any date not following that format is incorrect and should be ignored. Use the substr() function to parse the string and extract the date. The input ends with -1 on a line alone. Output each correct date as: 3/1/1990.

Ex: If the input is:

March 1, 1990
April 2 1995
7/15/20
December 13, 2003
-1

then the output is:

3/1/1990
12/13/2003
 */


#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int DateParser(string month) {
	int monthInt = 0;
	
	if (month == "January")
		monthInt = 1;
	else if (month == "February")
		monthInt = 2;
	else if (month == "March")
		monthInt = 3;
	else if (month == "April")
		monthInt = 4;
	else if (month == "May")
		monthInt = 5;
	else if (month == "June")
		monthInt = 6;
	else if (month == "July")
		monthInt = 7;
	else if (month == "August")
		monthInt = 8;
	else if (month == "September")
		monthInt = 9;
	else if (month == "October")
		monthInt = 10;
	else if (month == "November")
		monthInt = 11;
	else if (month == "December")
		monthInt = 12;
	return monthInt;
}

int main () {      
   istringstream inSS;
	string fullDate;
	string month;
	char breakChar;
	int date;
	int year;

	getline(cin, fullDate);
   while (fullDate != "-1") {
      inSS.clear();
      inSS.str(fullDate);
      
   	inSS >> month;
   	if (DateParser(month) != 0) {
      	inSS >> date;
      	inSS >> breakChar;
      	if (breakChar == ',') {
         	inSS >> year;         	
         	cout << DateParser(month) << "/" << date << "/" << year << endl;
      	}
   	}
      getline(cin, fullDate);
	}

}
