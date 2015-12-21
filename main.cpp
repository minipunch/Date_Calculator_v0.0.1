/*
 * main.cpp
 *
 *  Created on: Dec 1, 2015
 *      Author: josh
 */

#include "header.h"

int main() {
	calClass dateOne;
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
	// TO SET A DATE
	case 1:
		cout << "\nEnter day: ";
		cin >> day;
		cout << "Enter month: ";
		cin >> month;
		cout << "Enter year: ";
		cin >> year;

		dateOne.setDate(day,month,year);
		break;
		// DAYS FROM CURRENT SET DATE
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
		// CHECKS FOR A LEAP YEAR
	case 3:
		 leapYear = dateOne.isLeapYear(dateOne.getYear());
		 if(leapYear) {
			 cout << "\nYes, this year is a leap year.\n";
		 }
		 else {
			 cout << "\nNo, this year is not a leap year.\n";
		 }
		break;
		// CURRENT NUMBER OF DAYS INTO THE YEAR
	case 4:
		curDay = dateOne.curDayOfYear();
		cout << "\nThe set date is " << curDay << " days into the year " << dateOne.getYear() << "." << endl;
		break;
		// CURRENT WEEK OF YEAR
	case 5:
		curWeek = dateOne.curWeekOfYear();
		cout << "\nThe set date is " << curWeek + 1 << " week(s) into the year " << dateOne.getYear() << "." << endl;
		break;
		// DAYS LEFT IN YEAR
	case 6:
		daysLeft = dateOne.numOfDaysLeft();
		cout << "\nThe number of days left in " << dateOne.getYear() << " is " << daysLeft << endl;
		break;
		// PRINT DATE STRING
	case 7:
		dateOne.printDateStr(dateOne.getDateStr());
		break;
		//PRINT CALENDAR
	case 8:
		int days;
		int firstDayOfWeek;
		if(dateOne.getYear() == 0) {
			cout << "\nPlease set a date before displaying calendar!\n";
		}
		else
		{
			// number of days passed since January 1st 1800
			days = dateOne.calcDaysSoFar(dateOne.getYear(), dateOne.getMonth());
			firstDayOfWeek = days % 7;
			dateOne.printCalendar(dateOne.getMonth(), dateOne.getYear(), firstDayOfWeek);
		}
		break;
		// EXIT
	case 0:
		cout << "\nThanks for using my program!\n";
		return 0;
		break;
	}
}

	return 0;
}


