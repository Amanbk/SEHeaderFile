// Date.cpp
#include <iostream>
#include "Date.h"
using namespace std


void Date::set(int m, int d, int y) {
    month = m; day = d; year = y;
}

void Date::print() {
    cout << month << " / " << day << " / " << year << std::endl;
}
