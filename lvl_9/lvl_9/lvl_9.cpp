// lvl_9.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "publication.h"
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
	float minutes;
	std::cin >> answer;

	switch (answer)
	{
	case 'b':
	{
		book b1;
		std::cout << "Input name, price and number of pages in book: " << std::endl;
		std::cin >> bookName >> bookPrice >> numberOfPages;
		b1.set(bookName, bookPrice, numberOfPages);
		b1.get();
		break;
	}
	case 'a':
	{
		record r1;
		std::cout << "Input name, price and lenth in minutes in book: " << std::endl;
		std::cin >> bookName >> bookPrice >> minutes;
		r1.set(bookName, bookPrice, minutes);
		r1.get();
		break;
	}
	default:
		break;
	}
	system("pause");
    return 0;
}

