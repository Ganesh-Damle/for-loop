


/*10. WAP to print the numbers in a given range and their multiplicative inverse.
Suppose x is a number then its multiplicative inverse or reciprocal is 1/x.
The expected output for range 1 - 5
1 = 1
2 = 1/2 i.e 0.5
3 = 1/3 i.e 0.33
4 = 0.25
5 = 0.20
*/

#include<stdio.h>
void main(){
	int num1,num2;
	printf("Enter num1: \n");
	scanf("%d",&num1);

	printf("Enter num2: \n");
	scanf("%d",&num2);

	for(float i=num1; i<=num2; i++){
		float x =1/i;
		printf("%lf\n",x);
	}
}


