#include "stdafx.h"
#include "sales.h"


sales::sales() // 0 на все 3 месяца
{
	for (int i = 0; i < 3; i++)
	{
		totalSaled[i] = 0;
	}
}

sales::sales(float _m1, float _m2, float _m3) // инициалиация полученными значениями
{
	// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!по возможности переделать на массив!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	totalSaled[0] = _m1;
	totalSaled[1] = _m2;
	totalSaled[2] = _m3;
}

sales::sales(float *array, int size)
{
	float * ptr;
	ptr = array;
	for (int i = 0; i < size; i++)
	{
		totalSaled[i] = ptr[i]; 
	}
}

sales::~sales()
{
}

void sales::set() // инициалиация полученными значениями
{
	/*std::cout << "Input information about sales for last 3 month" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cin >> totalSaled[i];
	}*/

	std::cout << "Input number of month" << std::endl;
	std::cin >> numberOfMonth;
	std::cout << "Input information about sales for last " << numberOfMonth << " month" << std::endl;
	for (int i = 0; i < numberOfMonth; i++)
	{
		std::cin >> totalSaled[i];
	}
}

void sales::get() const // показываем продажи за 3 месяца. кол-во месяцев указывается в цикле
{
	for (int i = 0; i < 3; i++)
	{
		std::cout << "Month " << i+1 << ": " << totalSaled[i] << std::endl;
	}
}
