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
	if(cd) std::cout << "\nDisk type is cd" << std::endl;
	else std::cout << "Disk type is dvd" << std::endl;
	publication::get();
}

void disk::set(std::string bN, float bP)
{
	std::cout << "(c)d or (d)vd disk? " << std::endl;
	if (getche()=='c')
	{
		cd = true;
		dvd = false;
	}
	else
	{
		dvd = true;
		cd = false;
	}
	publication::set(bN, bP);
}
