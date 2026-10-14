#pragma once
#include <iostream>

class Base1 {
	int b1;
public:
	Base1(int b1) {
		this->b1 = b1;
	}
	void showInfo() const {
		std::cout << b1 << "\n";
	}

};
