#include "stdafx.h"
#include "book.h"


book::book() : publication2(), numberOfPages(0), sales()
{
}

book::book(std::string bN, float bP, int _numberOfPages, float *array, int size, unsigned short _d, unsigned short _m, unsigned short _y) : publication2(bN, bP, _d, _m, _y), numberOfPages(_numberOfPages), sales(array, size)
{
	// �������� ����� �� ���� ����������� ����� �����������
}

void book::set(std::string bN, float bP, int _numberOfPages, unsigned short _d, unsigned short _m, unsigned short _y)
{
	publication2::set(bN, bP, _d, _m, _y); // ���������� � �������� �����, ���� � ���� ������
	numberOfPages = _numberOfPages; // ���-�� �������
	d.set(); // ������������� ��� �����
	sales::set(); // ��������� ������� �� 3 ������
}

void book::get() const
{
	publication2::get();
	std::cout << "Number of pages: " << numberOfPages << std::endl;
	d.get();
	sales::get();
}


book::~book()
{
}
