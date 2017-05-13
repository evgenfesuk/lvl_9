#pragma once
#include "publication.h"
#include <conio.h>
class disk
{
public:
	disk();
	~disk();
	void get() const;
	void set();
protected:
	bool cd, dvd;
};

