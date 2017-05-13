#pragma once
class date
{
public:
	date();
	date(unsigned short _d, unsigned short _m, unsigned short _y);
	void set(unsigned short _d, unsigned short _m, unsigned short _y);
	void show() const;
	date operator+(date);
	~date();
private:
	unsigned short day, month, year;
};

