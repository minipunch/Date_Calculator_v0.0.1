/*
 * header.h
 *
 *  Created on: Dec 1, 2015
 *      Author: josh
 */

#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <string>
#include <stdlib.h>
using namespace std;

const int firstYear = 1800; // Start date
const int dayOffset = 3; // First day of start year (3 = Wednesday)
const int firstLeapYear = 1804; // reduce amount of leap year checks

const int daysInMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};
const int daysPassed[] = {0,31,59,90,120,151,181,212,243,273,304,334};

const string  months[] = { "January", "February", "March", "April", "May", "June", "July", "August",
        "September", "October", "November", "December"};

const string dayNames[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

void displayMenu();
void printHeader();

class dateType {
protected:
	int day;
	int month;
	int year;
public:
	dateType();
	void setDate(int day, int month, int year);
	void setDay(int day);
	void setMonth(int month);
	void setYear(int year);
	int  getDay() const;
	int getMonth() const;
	int getYear() const;
	void printDate() const;
	int curDayOfYear() const;
	int numOfDaysLeft() const;
	int curWeekOfYear() const;
	int DaysFromCur(int day, int month, int year) const;
};

class extDateType : public dateType {
private:
	string monthString;
public:
	extDateType();
	string getDateStr();
	void printDateStr(string x);
};

// EXTRA CREDIT CALENDAR CLASS
class calClass : public extDateType {
public:
	calClass();
	int calcDaysSoFar(int year, int month) const;
	bool isLeapYear(int x) const;
	void printCalendar(int month, int year, int firstDay) const;
};


#endif /* HEADER_H_ */
