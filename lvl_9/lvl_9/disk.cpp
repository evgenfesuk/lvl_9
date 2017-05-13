#include "stdafx.h"
#include "disk.h"


disk::disk()
{
}


disk::~disk()
{
}

void disk::get() const
{
	if(cd) std::cout << "Disk type is: CD" << std::endl;
	else if (dvd) std::cout << "Disk type is: DVD" << std::endl;
	else std::cout << "Unknown disk type" << std::endl;
}

void disk::set()
{
	std::cout << "(c)d or (d)vd disk? " << std::endl;
	char answer;
	//answer = _getche(); // при этом варианте в sales.cpp функции set нужно добавить \n перед текстом
	std::cin >> answer;
	if (answer=='c')
	{
		cd = true;
		dvd = false;
	}
	else if (answer == 'd')
	{
		dvd = true;
		cd = false;
	}
	else
	{
		dvd = false;
		cd = false;
	}
}
