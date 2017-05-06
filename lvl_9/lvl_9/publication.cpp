#include "stdafx.h"
#include "publication.h"
#include <string>
#include <iostream>

publication::publication() : bookName("N/A"), bookPrice(0.0f)
{
}

publication::publication(std::string bN, float bP) : bookName(bN), bookPrice(bP)
{
}

publication::~publication()
{
}

void publication::set(std::string bN, float bP)
{
	bookName = bN;
	bookPrice = bP;
}

void publication::get() const
{
	std::cout << "Book name: " << bookName << std::endl;
	std::cout << "Book price: " << bookPrice << std::endl;
}
