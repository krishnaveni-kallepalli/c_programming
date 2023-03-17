#include<stdio.h>
#define my_sizeof(type) (char*)(&type+1) - (char*)(&type) //1004 - 1000 = 4 4bytes
int main()
{
	int x=5;
	printf("%d",my_sizeof(x));
}
