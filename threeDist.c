//Program to check gratest integer among three distinct integers.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three distinct integers: ");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b && a>c)
	{
		printf("The gratest integer is %d",a);
	}
	else if (b>a && b>c)
	{
		printf("The gratest integer is %d",b);
	}
	else
	{ 
	printf("The gratest integer is %d",c);
	}
	return 0;
}
