#pragma once
#include <iostream>
using namespace std;
class animal {
public:
	animal() : nLegs(2) {
		std::cout << nLegs << " Animal \n";
	};
	int nLegs;
	void eat() { std::cout << " I eat \n"; }
};
