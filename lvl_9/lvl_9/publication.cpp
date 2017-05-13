#include "stdafx.h"
#include "publication.h"
#include <string>
#include <iostream>

publication::publication() : bookName("N/A"), bookPrice(0.0f) // пустой конструктор
{
}

publication::publication(std::string bN, float bP) : bookName(bN), bookPrice(bP) // инициализация объекта значениями bN - имя книги и bP - цена книги
{
}

publication::~publication()
{
}

void publication::set(std::string bN, float bP) // bN - имя книги и bP - цена книги
{
	bookName = bN;
	bookPrice = bP;
}

void publication::get() const // вывод на экран информации о книге и цене
{
	std::cout << "Book name: " << bookName << std::endl;
	std::cout << "Book price: " << bookPrice << std::endl;
}
