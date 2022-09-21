// simple calculator for two numbers!
#include<stdio.h>
int main()
{  printf("enter the ist number ,operation and second number\n");
	double a,b;
	char ch;
	scanf("%lf",&a);
	scanf("%c",&ch);
	scanf("%lf",&b);
	switch(ch)
	{
	   case '+':
		      printf("%lf",a+b);
		      break;
	   case '-':
	       printf("%lf",a-b);	
			     break;
	   case '*':
	       printf("%lf",a*b);
		     	break;
     	case '/':
	       printf("%lf",a/b);
			     break;
	   default:
	       printf("INVALID SYNTAX");
}
}
