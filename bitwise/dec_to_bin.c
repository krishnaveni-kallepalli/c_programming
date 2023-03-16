#include<stdio.h>
#define NUM_SIZE sizeof(int)*2
int main()
{
	int x,i;
	scanf("%d",&x);
	/*
	for(i=NUM_SIZE-1;i>=0;i--)
	{
		if((x&(0x1<<i))) printf("1");
		else printf("0");
	}*/
	for(i=NUM_SIZE-1;i>=0;i--)
		(x&(0x1<<i))?printf("1"):printf("0");
	printf("\n");
}
