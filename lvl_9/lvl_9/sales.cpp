#include "stdafx.h"
#include "sales.h"

//����������� �������� �� 12 �������

sales::sales() // 0 �� ��� ������
{
	for (int i = 0; i < MAX; i++)
	{
		totalSaled[i] = 0;
	}
}

//don't using at once
sales::sales(float _m1, float _m2, float _m3) // ������������ ����������� ����������
{
	// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!�� ����������� ���������� �� ������!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	totalSaled[0] = _m1;
	totalSaled[1] = _m2;
	totalSaled[2] = _m3;
}

// in use
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

void sales::set() // ������������ ����������� ����������
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

void sales::get() const // ���������� ������� �� numberOfMonth ������
{
	for (int i = 0; i < numberOfMonth; i++)
	{
		std::cout << "Month " << i+1 << ": " << totalSaled[i] << std::endl;
	}
}
