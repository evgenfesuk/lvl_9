#pragma once
#include "publication2.h"
#include "sales.h"
#include "disk.h"
class book :
	public publication2, protected sales // ������������� ������������
{
public:
	book(); // ������ �����������
	book(std::string bN, float bP, int _numberOfPages, float _m1, float _m2, float _m3, unsigned short _d, unsigned short _m, unsigned short _y);
	void set(std::string bN, float bP, int _numberOfPages, unsigned short _d, unsigned short _m, unsigned short _y);
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
	void get() const;
	~book();
protected:
	unsigned int numberOfPages;
	disk d; // ���� ��� �����
};

