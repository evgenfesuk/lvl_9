#pragma once
#include <string>
#include <iostream>
class publication
{
public:
	publication();
	publication(std::string bN, float bP);
	~publication();
	void set(std::string bN, float bP);
	void get() const;
protected:
	float bookPrice;
	std::string bookName;
};

