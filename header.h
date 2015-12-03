/*
 * header.h
 *
 *  Created on: Dec 1, 2015
 *      Author: josh
 */

#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

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
	bool isLeapYear() const;
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



#endif /* HEADER_H_ */
