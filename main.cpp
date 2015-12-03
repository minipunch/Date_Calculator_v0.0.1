/*
 * main.cpp
 *
 *  Created on: Dec 1, 2015
 *      Author: josh
 */

#include "header.h"

int main() {
	extDateType dateOne;
	int daysTill;
	int userChoice;
	int day, month, year;
	int curDay, daysLeft, curWeek;
	bool leapYear;

	printHeader();

	while(1){
	displayMenu();
	cin >> userChoice;

	switch(userChoice) {
	case 1:
		cout << "\nEnter day: ";
		cin >> day;
		cout << "Enter month: ";
		cin >> month;
		cout << "Enter year: ";
		cin >> year;

		dateOne.setDate(day,month,year);
		break;
	case 2:
		cout << "\nEnter an ending date:\n";
		cout << "\nEnter day: ";
		cin >> day;
		cout << "Enter month: ";
		cin >> month;
		cout << "Enter year: ";
		cin >> year;

		daysTill = dateOne.DaysFromCur(day,month,year);

		cout << endl;
		cout << "Days until " << month << "/" << day << "/" << year << ": " << daysTill << endl;
		break;
	case 3:
		 leapYear = dateOne.isLeapYear();
		 if(leapYear) {
			 cout << "\nYes, this year is a leap year.\n";
		 }
		 else {
			 cout << "\nNo, this year is not a leap year.\n";
		 }
		break;
	case 4:
		curDay = dateOne.curDayOfYear();
		cout << "\nThe set date is " << curDay << " days into the year " << dateOne.getYear() << "." << endl;
		break;
	case 5:
		curWeek = dateOne.curWeekOfYear();
		cout << "\nThe set date is " << curWeek + 1 << " week(s) into the year " << dateOne.getYear() << "." << endl;
		break;
	case 6:
		daysLeft = dateOne.numOfDaysLeft();
		cout << "\nThe number of days left in " << dateOne.getYear() << " is " << daysLeft << endl;
		break;
	case 7:
		dateOne.printDateStr(dateOne.getDateStr());
		break;
	case 0:
		cout << "\nThanks for using my program!\n";
		return 0;
		break;
	}
}

	return 0;
}


