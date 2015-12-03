/*
 * functions.cpp
 *
 *  Created on: Dec 1, 2015
 *      Author: josh
 */
#include "header.h"

dateType::dateType() {
	day = 0;
	month = 0;
	year = 0;
}

void dateType::setDate(int day, int month, int year) {
dateType::day = day;
dateType::month = month;
dateType::year = year;
}

void dateType::setDay(int day) {
	dateType::day = day;
}

void dateType::setMonth(int month) {
	dateType::month = month;
}

void dateType::setYear(int year) {
	dateType::year = year;
}

int dateType::getDay() const {
	return day;
}

int dateType::getMonth() const {
	return month;
}

int dateType::getYear() const {
	return year;
}

void dateType::printDate() const {
	cout << month << "-" << day << "-" << year << endl;
}

bool dateType::isLeapYear() const {
	if(year%4 == 0){
		return true;
	}else {
		return false;
	}
}

int dateType::curDayOfYear() const {
	int currentDay = 0;

	switch(month) {
	case 1:
		currentDay += day;
		return currentDay;
		break;
	case 2:
		currentDay = currentDay + 31 + day;
		return currentDay;
		break;
	case 3:
		currentDay = currentDay + 59 + day;
		return currentDay;
		break;
	case 4:
		currentDay += (90 + day);
		return currentDay;
		break;
	case 5:
		currentDay += (120 + day);
		return currentDay;
		break;
	case 6:
		currentDay += (151 + day);
		return currentDay;
		break;
	case 7:
		currentDay += (181 + day);
		return currentDay;
		break;
	case 8:
		currentDay += (212 + day);
		return currentDay;
		break;
	case 9:
		currentDay += (243 + day);
		return currentDay;
		break;
	case 10:
		currentDay += (273 + day);
		return currentDay;
		break;
	case 11:
		currentDay += (304 + day);
		return currentDay;
		break;
	case 12:
		currentDay += (334 + day);
		return currentDay;
		break;
	default: cout << "Invalid date month";
	return 0;
	break;
	}

}

int dateType::numOfDaysLeft() const {
	int currentDay = 0; // variable that will hold the number of days left in year
	int daysLeft; // variable that will hold the number of days left in year accounting for a leap year

		switch(month) {
		case 1:
			currentDay += day;
			break;
		case 2:
			currentDay = currentDay + 31 + day;
			break;
		case 3:
			currentDay = currentDay + 59 + day;
			break;
		case 4:
			currentDay += (90 + day);
			break;
		case 5:
			currentDay += (120 + day);
			break;
		case 6:
			currentDay += (151 + day);
			break;
		case 7:
				currentDay += (181 + day);
				break;
		case 8:
				currentDay += (212 + day);
				break;
		case 9:
				currentDay += (243 + day);
				break;
		case 10:
				currentDay += (273 + day);
				break;
		case 11:
				currentDay += (304 + day);
				break;
		case 12:
				currentDay += (334 + day);
				break;
		default: cout << "Invalid date month";
		break;
		}

		if(year%4==0) {
			daysLeft = 366 - currentDay;
		}
		else {
			daysLeft = 365 - currentDay;
		}

		return daysLeft;
}

int dateType::curWeekOfYear() const {
	int currentDay = 0;
	int currWeek;

	switch(month) {
			case 1:
				currentDay += day;
				break;
			case 2:
				currentDay = currentDay + 31 + day;
				break;
			case 3:
				currentDay = currentDay + 59 + day;
				break;
			case 4:
				currentDay += (90 + day);
				break;
			case 5:
				currentDay += (120 + day);
				break;
			case 6:
				currentDay += (151 + day);
				break;
			case 7:
					currentDay += (181 + day);
					break;
			case 8:
					currentDay += (212 + day);
					break;
			case 9:
					currentDay += (243 + day);
					break;
			case 10:
					currentDay += (273 + day);
					break;
			case 11:
					currentDay += (304 + day);
					break;
			case 12:
					currentDay += (334 + day);
					break;
			default: cout << "Invalid date month";
			break;
			}

	currWeek = currentDay / 7;
	return currWeek;
}

int dateType::DaysFromCur(int day, int month, int year) const {
	int currentDay1 = 0;
	int currentDay2 = 0;
	unsigned int daysFromCur = 0;
	unsigned int difference;
	
	switch(month) {
				case 1:
					currentDay1 += day;
					break;
				case 2:
					currentDay1 = currentDay1 + 31 + day;
					break;
				case 3:
					currentDay1 = currentDay1 + 59 + day;
					break;
				case 4:
					currentDay1 += (90 + day);
					break;
				case 5:
					currentDay1 += (120 + day);
					break;
				case 6:
					currentDay1 += (151 + day);
					break;
				case 7:
						currentDay1 += (181 + day);
						break;
				case 8:
						currentDay1 += (212 + day);
						break;
				case 9:
						currentDay1 += (243 + day);
						break;
				case 10:
						currentDay1 += (273 + day);
						break;
				case 11:
						currentDay1 += (304 + day);
						break;
				case 12:
						currentDay1 += (334 + day);
						break;
				default: cout << "Invalid date month";
				break;
				}
	
	switch(this->month) {
					case 1:
						currentDay2 += this->day;
						break;
					case 2:
						currentDay2 = currentDay2 + 31 + this->day;
						break;
					case 3:
						currentDay2 = currentDay2 + 59 + this->day;
						break;
					case 4:
						currentDay2 += (90 + this->day);
						break;
					case 5:
						currentDay2 += (120 + this->day);
						break;
					case 6:
						currentDay2 += (151 + this->day);
						break;
					case 7:
						currentDay2 += (181 + this->day);
						break;
					case 8:
						currentDay2 += (212 + this->day);
						break;
					case 9:
						currentDay2 += (243 + this->day);
						break;
					case 10:
						currentDay2 += (273 + this->day);
						break;
					case 11:
						currentDay2 += (304 + this->day);
						break;
					case 12:
						currentDay2 += (334 + this->day);
						break;
					default: cout << "Invalid date month";
					break;
					}
	daysFromCur = currentDay1 - currentDay2;
	if(this->year > year){
		cout << "That day has already passed" << endl;
	}else if(this->year < year) {
		difference = year - this->year;
		daysFromCur += 365*difference;
		return daysFromCur;
	}else if(this->year == year){
		return daysFromCur;
	}

		return 0;
}

extDateType::extDateType() {
	day = 0;
	month = 0;
	year = 0;
	monthString = "";
}

string extDateType::getDateStr() {
	switch(month) {
							case 1:
								monthString = "January";
								break;
							case 2:
								monthString = "February";
								break;
							case 3:
								monthString = "March";
								break;
							case 4:
								monthString = "April";
								break;
							case 5:
								monthString = "May";
								break;
							case 6:
								monthString = "June";
								break;
							case 7:
								monthString = "July";
									break;
							case 8:
								monthString = "August";
									break;
							case 9:
								monthString = "September";
									break;
							case 10:
								monthString = "October";
									break;
							case 11:
								monthString = "November";
									break;
							case 12:
								monthString = "December";
									break;
							default: cout << "Invalid date month";
							break;
							}
	return monthString;
}

void extDateType::printDateStr(string x) {
	cout << endl << x << ", " << day << " " << year << endl;
}

void displayMenu() {
	cout << "\nMENU\n";
	cout << "0 - EXIT\n";
	cout << "1 - SET DATE\n";
	cout << "2 - DAYS UNTIL\n";
	cout << "3 - CHECK LEAP YEAR\n";
	cout << "4 - CURRENT DAY OF YEAR\n";
	cout << "5 - CURRENT WEEK OF YEAR\n";
	cout << "6 - DAYS LEFT IN YEAR\n";
	cout << "7 - PRINT DATE\n";
	cout << "Enter command: ";
}

void printHeader() {
	/*********************************************************************
	* CONSTANTS
	* --------------------------------------------------------------------
	* USED FOR CLASS HEADING - ALL WILL BE OUTPUT
	* --------------------------------------------------------------------
	* PROGRAMMER : Josh Yolles
	* CLASS      : CS1B
	* SECTION    : TTH 5:00p - 9:20p
	* LAB_NUM    : 16
	* LAB_NAME   : Inheritance
	*********************************************************************/
	const char PROGRAMMER[40] = "Josh Yolles";
	const char CLASS[5]       = "CS1B";
	const char SECTION[45]    = "TH 5:00p - 9:20p";
	const int  LAB_NUM        = 16;
	const char LAB_NAME[37]   = "Inheritance";


// OUTPUT - Class Heading
    cout << left;
    cout << "********************************************************";
    cout << "\n* PROGRAMMED BY : "<<PROGRAMMER;
    cout << "\n* " <<setw(15) << "CLASS" << ": " << CLASS;
    cout << "\n* " << setw(13) << "SECTION" << ": " << SECTION;
    cout << "\n* LAB #" << setw(10) << LAB_NUM << ": " << LAB_NAME;
    cout << "\n******************************************************\n\n";
    cout << right;
}
