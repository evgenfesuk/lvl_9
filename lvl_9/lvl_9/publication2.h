#pragma once
#include "publication.h"
#include "date.h"
class publication2 :
	public publication
{
public:
	publication2();
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
	publication2(std::string bN, float bP, unsigned short _d, unsigned short _m, unsigned short _y);
	~publication2();
	void set(std::string bN, float bP, unsigned short _d, unsigned short _m, unsigned short _y);
	void get() const;
protected:
	date iDate; // дата релиза
};

