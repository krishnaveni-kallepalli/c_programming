/*	NUM =5 : 0101

	0	1	0	1
	2^3    2^2     2^1      2^0
				|  |
			dec +	|  |reminder
				|base
				
*/




#include<stdio.h>
#define NUM_SIZE  sizeof(int)*8
int main()
{
	int x=0101,rem,dec=0,temp=0,i	;
	temp=x;
	/*
	while(temp>0)
	{
		rem=temp%10;
		dec=dec+rem*base;
		base=base*2;
		temp=temp/10;
	}*/
	for(i=0;i<NUM_SIZE;i++)
	{
		rem=temp%10;
		dec=dec+rem*(2^i);
		temp=temp/10;
		
	}
	printf("%d",2^1);
	printf("dec:%d\n",dec);
}
















