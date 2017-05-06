#pragma once
#include "publication.h"
class book :
	protected publication
{
public:
	book();
	book(std::string bN, float bP, int _numberOfPages);
	void set(std::string bN, float bP, int _numberOfPages);
	~book();
protected:
	unsigned int numberOfPages;
};

