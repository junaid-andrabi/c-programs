//program in c to display name of months ,taking the numerical value from user .use switch

#include<stdio.h>

int main () 

{ 

    int a;

     printf("enter any number 1 to 12 ");

       

       scanf("%d",&a);

               //here we use switch 

       switch(a)

       {  

          case 1:

          	   printf("january");          	   break;

          

		  case 2:

		       printf("febuaury");

			   break;

			   

		  case 3:

		       printf("march");

			   break;

			   

		  case 4:

		       printf("april");

			   break;

			    

		  case 5:

		       printf("may");

			   break;

			    

	      case 6:

	      	   printf("june");

			   break;

			   

	      case 7:

		       printf("july");

			   break;

			   

		  case 8:

		       printf("august");

			   break;

			   

		  case 9:

		       printf("september");

			   break;

			   

	      case 10:

		       printf("octumber");

			   break;

			   

		  case 11:

		       printf("november");

		       break;

		       

		  case 12:

		       printf("december");

			   break;

			   

		//here we use another condition i.e. default in every program in case of (switch)	   

			   

		 default:

		        printf("invalid contex");	        

			  	   		   	     	   		     	    					 	   	   	   

       }    

    return 0;

	   

	  

	   

	   	        

}

 
