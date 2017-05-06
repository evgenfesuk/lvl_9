// lvl_9.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "publication.h"
#include "book.h"


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

		break;
	}
	case 'a':
	{

		break;
	}
	default:
		break;
	}
	system("pause");
    return 0;
}

