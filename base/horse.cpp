
#include"horse.h"

horse::horse(int p)
{
	position = p;
}
void horse::advance()
{
	position++;
}
int horse::getposition()
{
	if(position<15)
		return position;
	return -1;
}
