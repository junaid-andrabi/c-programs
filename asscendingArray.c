//sorting array in ascending order
#include<stdio.h>
int main()
{
	int x[5];
	int i,j,swap;
	
	printf("Enter the  values of an array:\n");
	for(i = 0;i < 5; i++){
	scanf("%d",&x[i]);
    }

for(j=0;j<5;j++)
   {for(i=0;i<5;i++)
	  {	if(x[i]>x[i+1])
	   	{	swap = x[i];
			x[i] = x[i+1];
			x[i+1] = swap;
	     }
	 else{
	 	continue;
	     }  
	 }
	}
for (i =0;i<5;i++){
	 printf("%d  ",x[i]);
		}
return 0;
}
