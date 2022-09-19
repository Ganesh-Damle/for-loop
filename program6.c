

//6. WAP to calculate the factorial of a given number.


#include<stdio.h>
void main(){

	int num,fact=1;
	printf("Enter num: \n");
	scanf("%d",&num);

	for(int i=1; i<=num; i++){
		fact=fact*i;
	}printf("Factorial of given number is %d\n",fact);
}
