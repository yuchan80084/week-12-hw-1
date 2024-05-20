#pragma once
#include "ani.h"
#include<iostream>
using namespace std;
class bird : public animal {
public:
	bird() : nWings(2) { cout << "bird" << endl; };
	int nWings;
	void fly() { cout << " I fly \n"; }
};