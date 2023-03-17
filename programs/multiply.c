#include<stdio.h>
int main()
{
	int x=5,y=6,p=0;
	for(;y!=0;y--) p=p+x;
	printf("%d\n",p);
}

/*
	while(y!=0) 
	{
		p=p+x;
		y--;
	}
*/
