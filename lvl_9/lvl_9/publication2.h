#pragma once
#include "publication.h"
#include "date.h"
class publication2 :
	public publication
{
public:
	publication2();
	/*
	bN - ��� �����
	bP - ���� �����
	_numberOfPages - ���-�� ������� � �����
	m1 - ������� �� ������ �����
	m2 - ������� �� ������ �����
	m3 - ������� �� ������ �����
	_d - ���� ������, ����
	_m - ���� ������, �����
	_y - ���� ������, ���
	*/
	publication2(std::string bN, float bP, unsigned short _d, unsigned short _m, unsigned short _y);
	~publication2();
	void set(std::string bN, float bP, unsigned short _d, unsigned short _m, unsigned short _y);
	void get() const;
protected:
	date iDate; // ���� ������
};

