#include "stdafx.h"
#include "record.h"


record::record() : publication(), minutes(0)
{
}

record::record(std::string bN, float bP, float _minutes, float m1, float m2, float m3) : publication(bN, bP), minutes(_minutes), sales(0, 0, 0)
{
}


record::~record()
{
}

void record::set(std::string bN, float bP, float _minutes)
{
	publication::set(bN, bP);
	minutes = _minutes;
	sales::set();
}

void record::get() const
{
	publication::get();
	std::cout << "Total minutes in book: " << minutes << std::endl;
	sales::get();
}
