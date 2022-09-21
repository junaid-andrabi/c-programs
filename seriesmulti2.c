/*write aprogram in C to display the following series upto 'n',
2 4 8 16 32 64 ..*/
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number: (i.e upto you want to find)\n ");
	scanf("%d",&n);
	
for(i=2;i<=n;i*=2)
{
	printf("%d ",i);
}
	return 0;
}
