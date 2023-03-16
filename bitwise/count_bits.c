//count no of bits changed while changing 5 to 6
#include<stdio.h>
#define NUM_SIZE sizeof(int)
int main()
{
	int x=5,y=7,i,count=0,z;	
	z=x^y;
	for(i=0;i<NUM_SIZE;i++)
	{
		if(z&1) count++;
		z=z>>1;
	}
	if(count!=0) printf("Count:%d\n",count);
}



