#pragma once
#include <string>
#include <iostream>
class publication
{
public:
	publication();// ������ �����������
	publication(std::string bN, float bP);// ������������� ������� ���������� bN - ��� ����� � bP - ���� �����
	~publication();
	void set(std::string bN, float bP);// bN - ��� ����� � bP - ���� �����
	void get() const;// ����� �� ����� ���������� � ����� � ����
protected:
	float bookPrice;// ���� �����
	std::string bookName;// ��� �����
};

