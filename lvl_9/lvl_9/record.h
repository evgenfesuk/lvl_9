#pragma once
#include "publication2.h"
#include "sales.h"
#include "disk.h"
class record :
	protected publication2, protected sales
{
public:
	record();
	record(std::string bN, float bP, float _minutes, float m1, float m2, float m3, unsigned short _d, unsigned short _m, unsigned short _y);
	~record();
	void set(std::string bN, float bP, float _minutes, unsigned short _d, unsigned short _m, unsigned short _y);
	void get() const;
protected:
	float minutes;
	disk d;
};

