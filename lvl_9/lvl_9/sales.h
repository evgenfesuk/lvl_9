#pragma once
#include <iostream>
const unsigned int MAX = 12;
class sales
{
public:
	sales();
	sales(float _m1, float _m2, float _m3);
	sales(float *, int);
	/*
	m1 - продажи за первый мес€ц
	m2 - продажи за второй мес€ц
	m3 - продажи за третий мес€ц
	*/
	~sales();
	void set();
	void get() const;
protected:
	int numberOfMonth;
	float totalSaled[MAX]; // массив продаж по мес€цам
};

