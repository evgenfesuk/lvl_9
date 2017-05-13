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
	void set();
protected:
	bool cd, dvd;
};

