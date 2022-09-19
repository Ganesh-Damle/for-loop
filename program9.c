

//9. WAP to calculate the square root of a number ranging from 100 to 300


#include<stdio.h>
void main(){
	int num1,num2,sum=0;
	printf("Enter num1: \n");
	scanf("%d",&num1);

	printf("Enter num2:\n");
	scanf("%d",&num2);
	float sqr,temp;

	for(int i=num1; i<=num2; i++){
		sqr=i/2;
		temp=0;
		while(sqr!=temp){
			temp=sqr;
			sqr=(i/temp+temp)/2;

	}

	printf("Square root of %d is %f\n",i,sqr);
	}
	

}
