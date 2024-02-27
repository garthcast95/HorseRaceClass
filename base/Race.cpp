#include"Race.h"
#include <stdlib.h> 
#include<time.h> 
#include <unistd.h>
using namespace std;
Race::Race(int len)
{
	length = len;
}
void Race::printLane(int num)
{
	for (int i = 0; i < 15; ++i)
	{
		if (i == h[num].getposition())
			std::cout << char(48 + num);
		else
			std::cout << ".";
	}
    std::cout<<std::endl;
	
}

void Race::start()
{
	h = new horse[length];
	srand(time(NULL));
   bool win=false;

   do{		
           for (int i = 0; i < length; ++i)
		{
		     printLane(i);
		}
			std::cout<<std::endl;
	for (int count = 0; count<length;++count)
	{
		if(rand()%2)
		{
			int ind=h[count].getposition();
			if(ind==-1)
			{
				win=true;
				for (int i = 0; i < length; ++i)
				{
		     		printLane(i);
				}
				std::cout<<std::endl;
				cout<<"horse "<<count<<" won the race!"<<endl;
				break;
			}
			else
			{
				if((ind)<15)
				{
					h[count].advance();
				}
				else
				{
					win=true;
					 for (int i = 0; i < length; ++i)
						{
							printLane(i);
						}
							std::cout<<std::endl;
					cout<<"horse "<<count<<" won the race!"<<endl;
					break;				
				}

			}	
		}
			 
   	}
        sleep(1);
	}while(!win);
	
}
