#pragma once
#include <iostream>
class sales
{
public:
	sales();
	sales(float _m1, float _m2, float _m3);
	sales(float *, int);
	/*
	m1 - ������� �� ������ �����
	m2 - ������� �� ������ �����
	m3 - ������� �� ������ �����
	*/
	~sales();
	void set();
	void get() const;
protected:
	float totalSaled[3]; // ������ ������ �� �������
	int numberOfMonth;
};

