#pragma once
#include <iostream>

class Base2 {
	int b2;
public:
	Base2(int b2) {
		this->b2 = b2;
	}
	void showInfo() const {
		std::cout << b2 << "\n";
	}
};