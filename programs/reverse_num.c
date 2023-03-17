#include<stdio.h>
int main()
{
	int n=12345,i,sum=0;
	for(;n;n=n/10) sum=sum*10+n%10;
	printf("%d",sum);
}

/*

	int n=12345,i,sum=0;
	for(i=n;n;n=n/10)
	{
		printf("%d	%d\n",sum,n);
		sum=sum*10+n%10;
	}
	printf("%d",sum);
	
*/
	
	
