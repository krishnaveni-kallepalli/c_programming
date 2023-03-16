#include<stdio.h>
#define NUM_SIZE sizeof(int)*8
int main()
{
	int x=6,i,count=0;
	for(i=0;i<NUM_SIZE;i++)
	{
		if(x&1) break;
		else count++;
		x=x>>1;
	}
	if(count!=0) printf("Trailing Zeros:%d\n",count);
	else printf("No trailing zeros\n");
}
