//get a bit (pos : 0 or 1) -  check bit is set or not at given pos 

#include<stdio.h>
int main()
{
	int x=1,pos=0;
	/*
	if(x&(0x1<<pos)) printf("1\n");
	else printf("0\n");*/
	(x&(0x1<<pos))?printf("1\n"):printf("0\n");
}
