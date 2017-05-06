#include "stdafx.h"
#include "book.h"


book::book()
{
	publication();
}

book::book(std::string bN, float bP, int _numberOfPages)
{
	publication(bN, bP);
	numberOfPages = _numberOfPages;
}

void book::set(std::string bN, float bP, int _numberOfPages)
{
	publication(bN, bP);
	numberOfPages = _numberOfPages;
}


book::~book()
{
}
