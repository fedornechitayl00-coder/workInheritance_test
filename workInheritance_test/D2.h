#pragma once
#include "D1.h"

class D2 :
    private D1
{
    int d2;
public:
    D2(int d1, int d2, int b1) : D1(b1, d1) {
        this->d2 = d2;
    }
    void showInfo() const {
    D1::showInfo();
        std::cout << d2 << "\n";
    }
};

