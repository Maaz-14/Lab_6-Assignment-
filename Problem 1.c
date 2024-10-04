#include<stdio.h>
int main (){
	int number,sum;
	sum=0;
	scanf("%d",&number);
	while(number!=0){
		
		sum=sum+number;
		scanf("%d",&number);
		
	}
	printf("%d is the sum of all numbers",sum);
	return 0;
}