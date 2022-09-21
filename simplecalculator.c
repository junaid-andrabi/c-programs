  //simple claculator for two numbers
  

#include<stdio.h>


 int main ()
{   printf(" enter your ist number,operation then number\n");
    double no1 ,no2;
    char ch;
    scanf("%lf", &no1);
    scanf("%c", &ch);
    scanf("%lf",&no2);
	
	
	if (ch == '+')
	 {
	 
	     printf("the sum is %lf ", no1+no2);
	 } 
	else if (ch == '-')  
     { 
        printf("the subtraction is %lf",no1-no2);
        
     }
         else if (ch == '/')
         { printf("the division is %lf",no1/no2);
         }
      else  if (ch == '*')
        { printf("the multiplication is %lf", no1*no2);
        }
        
    
         
         
return 0;
  
}   
   

   
