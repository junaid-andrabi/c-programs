//to search in an array
#include<stdio.h>
int main(){
	int x[10],i;
	
	printf("Enter the  values of an array:");
	for(i = 0;i < 10; i++){
	scanf("%d",&x[i]);
}

int value,flag= 0;
printf("Enter the 'value' you want to search?");
scanf("%d",&value);

for(i = 0;i <10 ; i++){
	if(value == x[i]){
		printf("your value was found at position %d",i+1);
		flag =1;
		break;
	}
	}
if(flag == 0){
	printf("Value was not found in array!");
}
return 0;
}
