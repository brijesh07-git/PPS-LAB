#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter two integers: ");
	scanf("%d%d",&a,&b);
	printf("Before swapping a = %d, b = %d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping a = %d, b = %d\n",a,b);
	
}