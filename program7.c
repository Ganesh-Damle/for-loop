

//7. WAP to calculate the LCM of given two numbers

#include<math.h>
#include<stdio.h>
void main(){

	int num1,num2,i,LCM,common_div;
	printf("Enter number:\n");
	scanf("%d",&num1);

	printf("Enter number:\n");
	scanf("%d",&num2);


	for( i=1; i<=num1 &&  i<=num2; i++){
		if (num1%i==0 && num2%i==0){
			common_div=i;
		}}
		LCM=(num1*num2)/common_div;
		printf("LCM of given two number is %d\n",LCM);
	


}
