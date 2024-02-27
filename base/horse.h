#pragma once
#include<iostream>

class horse
{
private:
	int position;
public:
	horse(int p = 0);
	void advance();
	int getposition();
};