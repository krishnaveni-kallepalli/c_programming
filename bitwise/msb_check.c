#include<stdio.h>
#define NUM_SIZE sizeof(int)
int main()
{
	int x=10,msb;
	msb=0x1<<(NUM_SIZE-1);
	if(x&msb) printf("set\n");
	else printf("not set\n");
}
