#include<stdio.h>
#define NUM_SIZE sizeof(int)*8
int main()
{
	int x=0,pos=0;
	x=x|(0x1<<pos);
	printf("%d\n",x);
}
