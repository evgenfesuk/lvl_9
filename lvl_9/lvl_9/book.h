#pragma once
#include "publication2.h"
#include "sales.h"
#include "disk.h"
class book :
	public publication2, protected sales
{
public:
	book();
	book(std::string bN, float bP, int _numberOfPages, float m1, float m2, float m3, unsigned short _d, unsigned short _m, unsigned short _y);
	void set(std::string bN, float bP, int _numberOfPages, unsigned short _d, unsigned short _m, unsigned short _y);
	void get() const;
	~book();
protected:
	unsigned int numberOfPages;
	disk d;
};

