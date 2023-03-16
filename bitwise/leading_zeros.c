#include<stdio.h>
#define NUM_SIZE sizeof(int)*2
int main()
{
	int x=5,count=0,i,msb;
	msb=0x1<<(NUM_SIZE-1);
	for(i=NUM_SIZE;i>=0;i--)
	{
		if(msb&x) break;
		else count++;
		x=x<<1;	
	}
	if(count!=0) printf("Leading zeros:%d\n",count);
	else printf("No Leading zeros\n");
}
