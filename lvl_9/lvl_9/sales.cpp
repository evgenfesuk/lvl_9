#include "stdafx.h"
#include "sales.h"


sales::sales()
{
	for (int i = 0; i < 3; i++)
	{
		totalSaled[i] = 0;
	}
}

sales::sales(float _m1, float _m2, float _m3)
{
	totalSaled[0] = _m1;
	totalSaled[1] = _m2;
	totalSaled[2] = _m3;
}

sales::~sales()
{
}

void sales::set()
{
	std::cout << "Input information about sales for last 3 month" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cin >> totalSaled[i];
	}
}

void sales::get() const
{
	for (int i = 0; i < 3; i++)
	{
		std::cout << "Month " << i+1 << ": " << totalSaled[i] << std::endl;
	}
}
