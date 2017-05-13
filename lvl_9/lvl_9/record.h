#pragma once
#include "publication2.h"
#include "sales.h"
#include "disk.h"
class record :
	protected publication2, protected sales
{
public:
	record();
	/*
	bN - имя книги
	bP - цена книги
	_minutes - кол-во минут в аудиокниге
	m1 - продажи за первый месяц
	m2 - продажи за второй месяц
	m3 - продажи за третий месяц
	_d - дата релиза, день
	_m - дата релиза, месяц
	_y - дата релиза, год
	*/
	record(std::string bN, float bP, float _minutes, float m1, float m2, float m3, unsigned short _d, unsigned short _m, unsigned short _y);
	~record();
	void set(std::string bN, float bP, float _minutes, unsigned short _d, unsigned short _m, unsigned short _y);
	void get() const;
protected:
	float minutes;
	disk d; // диск для книги
};

