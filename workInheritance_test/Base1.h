#pragma once
#include <iostream>

class Base1 {
private:
	int b1;
public:
	Base1();
	void showInfo() const;
};

Base1::Base1()
{
	b1 = 0;
}

void Base1::showInfo() const
{
	std::cout << b1 << "\n";
}
