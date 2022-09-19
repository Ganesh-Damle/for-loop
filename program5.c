

//5. WAP to take the Number input and print all the factors of that number


#include<stdio.h>

void main(){
	int num1;
	printf("Enter num1: \n");
	scanf("%d",&num1);

	
	if(num1>=0){
		printf("Factor of given number\n");
		for(int i=1; i<=num1; i++){
			if(num1%i==0){
				printf("%d\n",i);
			}
			
		}
	}
	else{
		printf("Enter number is not integer\n");
	}

	}
