#pragma once
#include"horse.h"
class Race
{
private:
	int length;
	horse *h;
public:
	Race(int len=0);
	void printLane(int);
    void start();
};
