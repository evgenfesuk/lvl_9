#include "stdafx.h"
#include "publication2.h"


publication2::publication2()
{
	publication::publication();
	iDate.set(0, 0, 0);
}

publication2::publication2(std::string bN, float bP, unsigned short _d, unsigned short _m, unsigned short _y)
{
	publication::publication(bN, bP);
	iDate.set(_d, _m, _y);
}


publication2::~publication2()
{
}

void publication2::set(std::string bN, float bP, unsigned short _d, unsigned short _m, unsigned short _y)
{
	publication::set(bN, bP);
	iDate.set(_d, _m, _y);
}

void publication2::get() const
{
	publication::get();
	iDate.show();
}