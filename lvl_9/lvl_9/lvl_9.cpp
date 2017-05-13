// lvl_9.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "publication2.h"
#include "book.h"
#include "record.h"
#include "sales.h"
#include "disk.h"


int main()
{
	std::cout << "Printed (b)ook or (a)udio?" << std::endl;
	char answer;
	float bookPrice;
	std::string bookName;
	unsigned int numberOfPages;
	unsigned short _d, _m, _y;
	float minutes;
	std::cin >> answer;

	switch (answer)
	{
	case 'b':
	{
		book b1;
		std::cout << "Input name, price, number of pages in book and release date: " << std::endl;
		std::cin >> bookName >> bookPrice >> numberOfPages >> _d >> _m >> _y;
		b1.set(bookName, bookPrice, numberOfPages, _d, _m, _y);
		b1.get();
		break;
	}
	case 'a':
	{
		record r1;
		std::cout << "Input name, price, lenth in minutes in book and release date: " << std::endl;
		std::cin >> bookName >> bookPrice >> minutes >> _d >> _m >> _y;
		r1.set(bookName, bookPrice, minutes, _d, _m, _y);
		r1.get();
		break;
	}
	default:
		break;
	}
	system("pause");
    return 0;
}

