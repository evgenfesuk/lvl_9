#include "stdafx.h"
#include "date.h"
#include <iostream>
#include <iomanip>

using namespace std;


date::date() : day(0), month(0), year(0)
{
}

date::date(unsigned short _d, unsigned short _m, unsigned short _y) : day(_d), month(_m), year(_y)
{
}

void date::set(unsigned short _d, unsigned short _m, unsigned short _y)
{
	day = _d;
	month = _m;
	year = _y;
}

void date::show() const
{
	cout << "Release date: ";
	cout << setfill('0') << setw(2) << day << "." << setfill('0') << setw(2) << month << "." << setfill('0') << setw(4) << year << endl;
}

date date::operator+(date d2)
{
	unsigned short _day, _month, _year;
	_day = day + d2.day;
	_month = month + d2.month;
	_year = year + d2.year;
	return date(_day, _month, _year);
}


date::~date()
{
}
