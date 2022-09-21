    //c programe for finding roots of quadratic equation
#include<stdio.h>
   int main ()
 {   
    int  a,b,c,r1,r2,d;
    printf("enter coefficient of a,b and c  ");
    

    scanf("%d %d %d", &a,&b,&c);
    d=b*b - 4*a*c;
    
      if (d>0)
     {
   		r1=-b+sqrt(d) /(2*a);
		r2=-b+sqrt(d) /(2*a);
		
		printf("the real roots = %d %d",r1 ,r2);   	
            	
      }
      else if(d==0)
      {
      	r1=-b/(2*a);
      	r2=-b/(2*a);
      	
      	printf("roots are equal = %d %d",r1,r2);
      }
          else
              printf("roots are imaginary");
         return 0;     
 }  
