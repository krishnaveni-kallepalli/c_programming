#include<stdio.h>
int main()
{
	int x=1,pos=1;
	x=x^(0x1<<pos);
	printf("%d\n",x);
}
