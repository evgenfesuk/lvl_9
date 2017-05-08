#pragma once
#include "publication.h"
#include <conio.h>
class disk :
	protected publication
{
public:
	disk();
	~disk();
	void get() const;
	void set(std::string bN, float bP);
protected:
	bool cd, dvd;
};

