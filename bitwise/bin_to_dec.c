/*	NUM =5 : 0101

	0	1	0	1
	2^3    2^2     2^1      2^0
				|  |
			dec +	|  |reminder
				|base
				
*/




#include<stdio.h>
int main()
{
	int x,base=1,rem=0,dec=0,temp=0;
	
	scanf("%d",&x);
	temp=x;
	printf("temp:%d x:%d\n",temp,x);
	
	while(temp>0)
	{
		rem=temp%10;
		dec=dec+rem*base;
		base=base*2;
		temp=temp/10;
	}
	printf("dec:%d\n",dec);
}
















