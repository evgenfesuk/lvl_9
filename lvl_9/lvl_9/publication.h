#pragma once
#include <string>
#include <iostream>
class publication
{
public:
	publication();// пустой конструктор
	publication(std::string bN, float bP);// инициализация объекта значениями bN - имя книги и bP - цена книги
	~publication();
	void set(std::string bN, float bP);// bN - имя книги и bP - цена книги
	void get() const;// вывод на экран информации о книге и цене
protected:
	float bookPrice;// цена книги
	std::string bookName;// имя книги
};

