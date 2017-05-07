#pragma once
#include "publication.h"
class record :
	protected publication
{
public:
	record();
	record(std::string bN, float bP, float _minutes);
	~record();
	void set(std::string bN, float bP, float _minutes);
	void get() const;
protected:
	float minutes;
};

