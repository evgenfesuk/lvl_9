#pragma once
#include "publication.h"
#include "sales.h"
#include "disk.h"
class book :
	protected publication, protected sales
{
public:
	book();
	book(std::string bN, float bP, int _numberOfPages, float m1, float m2, float m3);
	void set(std::string bN, float bP, int _numberOfPages);
	void get() const;
	~book();
protected:
	unsigned int numberOfPages;
	disk d;
};

