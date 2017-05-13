#pragma once
#include "publication2.h"
#include "sales.h"
#include "disk.h"
class book :
	public publication2, protected sales // множественное наследование
{
public:
	book(); // пустой конструктор
	book(std::string bN, float bP, int _numberOfPages, float _m1, float _m2, float _m3, unsigned short _d, unsigned short _m, unsigned short _y);
	void set(std::string bN, float bP, int _numberOfPages, unsigned short _d, unsigned short _m, unsigned short _y);
	/*
	bN - имя книги
	bP - цена книги
	_numberOfPages - кол-во страниц в книге
	m1 - продажи за первый месяц
	m2 - продажи за второй месяц
	m3 - продажи за третий месяц
	_d - дата релиза, день
	_m - дата релиза, месяц
	_y - дата релиза, год
	*/
	void get() const;
	~book();
protected:
	unsigned int numberOfPages;
	disk d; // диск для книги
};

