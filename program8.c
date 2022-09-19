


//8. WAP take two characters if these characters are equal then print the same but if 
//they are unequal then print their difference....


#include<stdio.h>
void main(){
	char ch1,ch2;
	printf("Enter character: \n");
	scanf("%c",&ch1);

	printf("Enter charcter 2: \n");
	scanf(" %c",&ch2);
	if(ch1>ch2){

	if(ch1==ch2){
		printf("The given two charcter are equal\n");
	}
	else{
		printf("There difference is %d\n",ch1-ch2);
	}
	}
	else if(ch1<ch2){
	if(ch1==ch2){
		printf("The given two charcter are equal\n");
	}
	else{
		printf("There difference is %d\n",ch2-ch1);
	}
	}
	


}

