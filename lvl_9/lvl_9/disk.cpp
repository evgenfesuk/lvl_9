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
	if(cd) std::cout << "Disk type is: CD" << std::endl; // cd true?
	else if (dvd) std::cout << "Disk type is: DVD" << std::endl; // dvd true?
	else std::cout << "Unknown disk type" << std::endl; // cd and dvd false
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
	else // missclick (not 'c' or 'd')
	{
		dvd = false;
		cd = false;
	}
}
