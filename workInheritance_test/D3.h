#pragma once
#include "Base2.h"
#include "D2.h"

class D3
	: public D2,
	private Base2 {
	int d3;
public:
	D3(int b1, int d1, int d2, int b2, int d3) : D2(b1, d1, d2), Base2(b2) {
		this->d3 = d3;
	}
	void showInfo() const {
		D2::showInfo();
		Base2::showInfo();
		std::cout << d3 << "\n";
	}
};