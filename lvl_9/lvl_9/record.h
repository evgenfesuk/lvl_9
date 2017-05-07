#pragma once
#include "publication.h"
#include "sales.h"
class record :
	protected publication, protected sales
{
public:
	record();
	record(std::string bN, float bP, float _minutes, float m1, float m2, float m3);
	~record();
	void set(std::string bN, float bP, float _minutes);
	void get() const;
protected:
	float minutes;
};

