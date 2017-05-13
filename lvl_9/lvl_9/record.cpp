#include "stdafx.h"
#include "record.h"


record::record() : publication2(), minutes(0), sales()
{
}

record::record(std::string bN, float bP, float _minutes, float m1, float m2, float m3, unsigned short _d, unsigned short _m, unsigned short _y) : publication2(bN, bP, _d, _m, _y), minutes(_minutes), sales(_d, _m, _y)
{
	// создание книги со всей информацией через конструктор
}


record::~record()
{
}

void record::set(std::string bN, float bP, float _minutes, unsigned short _d, unsigned short _m, unsigned short _y)
{
	publication2::set(bN, bP, _d, _m, _y);
	minutes = _minutes;
	d.set();
	sales::set();
}

void record::get() const
{
	publication2::get();
	std::cout << "Total minutes in book: " << minutes << std::endl;
	d.get();
	sales::get();
}
