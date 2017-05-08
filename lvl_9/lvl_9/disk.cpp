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
	else std::cout << "Disk type is: DVD" << std::endl;
}

void disk::set(std::string bN, float bP)
{
	std::cout << "(c)d or (d)vd disk? " << std::endl;
	if (_getche()=='c')
	{
		cd = true;
		dvd = false;
	}
	else
	{
		dvd = true;
		cd = false;
	}
}
