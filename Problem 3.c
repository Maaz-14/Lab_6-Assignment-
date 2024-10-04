#include<stdio.h>
int main(){
	int number,i,digit;
	i=0;
	scanf("%d",&number);
	if (number % 10 !='\n'){
		i=i+1;
	}
	if (i>4){
		printf("Enter 4 digit number only.");
	}
	
}