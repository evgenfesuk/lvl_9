#pragma once
#include "publication.h"
#include "date.h"
class publication2 :
	public publication
{
public:
	publication2();
	publication2(std::string bN, float bP, unsigned short _d, unsigned short _m, unsigned short _y);
	~publication2();
	void set(std::string bN, float bP, unsigned short _d, unsigned short _m, unsigned short _y);
	void get() const;
protected:
	/*float bookPrice;
	std::string bookName;*/
	date iDate;
};

