#pragma once
#include "ani.h"
#include<iostream>
using namespace std;
class human : public animal {
public:
	human() { nArms = 2; cout << "human" << endl; };
	int nArms;
	void walk() { std::cout << " I walk \n"; }
};