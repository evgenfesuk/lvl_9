#include "stdafx.h"
#include "publication2.h"


publication2::publication2()
{
	publication::publication(); // пустой родительский конструктор класса
	iDate.set(0, 0, 0); // + дату устанавливаем на 0
}

publication2::publication2(std::string bN, float bP, unsigned short _d, unsigned short _m, unsigned short _y)
{
	publication::publication(bN, bP); // родительский конструктор с параметрами
	iDate.set(_d, _m, _y); // установка даты релиза
}


publication2::~publication2()
{
}

void publication2::set(std::string bN, float bP, unsigned short _d, unsigned short _m, unsigned short _y)
{
	publication::set(bN, bP); // родительская функция set
	iDate.set(_d, _m, _y); // установка даты релиза
}

void publication2::get() const // вывод инфо на экран
{
	publication::get();
	iDate.show();
}