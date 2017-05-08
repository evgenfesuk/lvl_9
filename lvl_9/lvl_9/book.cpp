#include "stdafx.h"
#include "book.h"


book::book() : publication(), numberOfPages(0), sales()
{
}

book::book(std::string bN, float bP, int _numberOfPages, float m1, float m2, float m3) : publication(bN, bP), numberOfPages(_numberOfPages), sales(0, 0, 0)
{
}

void book::set(std::string bN, float bP, int _numberOfPages)
{
	publication::set(bN, bP);
	numberOfPages = _numberOfPages;
	d.set(bN, bP);
	sales::set();
}

void book::get() const
{
	publication::get();
	std::cout << "Number of pages: " << numberOfPages << std::endl;
	d.get();
	sales::get();
}


book::~book()
{
}
