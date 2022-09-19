

//4. WAP to Find the sum of numbers that are divisible by 5 in the given range


#include<stdio.h>

void main(){
	int num1,num2,sum=0;
	printf("Enter num1: \n");
	scanf("%d",&num1);

	printf("Enter num2: \n");
	scanf("%d",&num2);

	if(num1>=0 && num2>=0){
		
		for(int i=num1; i<=num2; i++){
			sum=sum+i;
			
		}
		if(sum%5==0){
			printf("%d the sum of given range is divisible by 5 \n",sum);
		}
		else{
			printf("%d the sum of given range is not  divisible by 5\n",sum);
		}

			
	}
	else{
		printf("Given number is negative\n");
	}
}
