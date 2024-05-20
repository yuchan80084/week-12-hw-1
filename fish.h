#pragma once
#include <iostream>
#include"ani.h"
using namespace std;
class fish : public animal 
{
public:
	fish()
	{
		nfins = 2;
	};
	int nfins;
	void swim()
	{
		cout << " I swim " << endl;
	}
};
