#include<stdio.h>
int main(){
	int x[5];
	int i;
	
	printf("Enter the  values of an array\n");
	for(i = 0;i < 5; i++){
	scanf("%d",&x[i]);
}  printf("the reverse of above given data or we can say REVERSE ARRAY is \n");
  for(i=4;i>=0;i--){
	printf("%d\t",x[i]);
}
return 0;
}
