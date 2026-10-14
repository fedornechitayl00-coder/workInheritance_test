#pragma once
#include "Base1.h"

class D1 :
	public Base1
{
private:
	int d1;
public:
	D1(int b1, int d1) : Base1(b1){
		this->d1 = d1;
	}
	void showInfo() const {
		Base1::showInfo();
		std::cout << d1 << "\n";
	}
};
