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

void disk::set(std::string bN, float bP)
{
	std::cout << "(c)d or (d)vd disk? " << std::endl;
	char answer;
	answer = _getche();
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
