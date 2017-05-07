#include "stdafx.h"
#include "book.h"


book::book()
{
	publication();
	numberOfPages = 0;
}

book::book(std::string bN, float bP, int _numberOfPages)
{
	publication(bN, bP);
	numberOfPages = _numberOfPages;
}

void book::set(std::string bN, float bP, int _numberOfPages)
{
	publication::set(bN, bP);
	numberOfPages = _numberOfPages;
}

void book::get() const
{
	publication::get();
	std::cout << "Number of pages: " << numberOfPages << std::endl;
}


book::~book()
{
}
