//flip a bit - make    0 to 1 & 1 to 0     at given pos 
#include<stdio.h>
int main()
{
	int x=8,pos=3;
	
/*
	if(x&(0x1<<pos)) x&=~(0x1<<pos); 
	else x|=(0x1<<pos);*/
	(x&(0x1<<pos))?(x&=~(0x1<<pos)):(x|=(0x1<<pos));
	printf("%d\n",x);
}
