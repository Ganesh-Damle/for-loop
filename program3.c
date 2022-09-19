

//3. WAP to print all even numbers in reverse order and odd numbers in the standard
//way. Both separately. Within a range.


#include<stdio.h>

void main(){
	int num1,num2;
	printf("Enter number: \n");
	scanf("%d",&num1);

	printf("Enter num2: \n");
	scanf("%d",&num2);

	if(num1>=0 && num2>=0){
		printf("Even number in reverse order\n");
		for(int i=num2; i>=num1; i--){
			if(i%2==0){
				printf("%d\n",i);
			}
		}
	}
	printf("\n");
	if(num1>=0 && num2>=0){
		printf("odd numbers\n");
		for(int i=num1; i<=num2; i++){
			if(i%2!=0){
				printf("%d\n",i);
			}
		}
	}
	else{
		printf("Given range is incorrect...!\n");
	}
}
