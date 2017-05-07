#include "stdafx.h"
#include "record.h"


record::record() : publication(), minutes(0)
{
}

record::record(std::string bN, float bP, float _minutes) : publication(bN, bP), minutes(_minutes)
{
}


record::~record()
{
}

void record::set(std::string bN, float bP, float _minutes)
{
	publication::set(bN, bP);
	minutes = _minutes;
}

void record::get() const
{
	publication::get();
	std::cout << "Total minutes in book: " << minutes << std::endl;
}
