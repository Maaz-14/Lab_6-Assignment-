#include<stdio.h>
int main(){
	int num,i,sum=1;
	printf("Enter Number(Positive only): ");
	scanf("%d",&num);
	while (num<=0){
		printf("Negative Number Entered! Enter Positive number: ");
		scanf("%d",&num);
	}
	for (i=1;i<=num;i++){
		sum=sum*i; // 1 2 6 
	
	}
	printf("Answer: %d!=%d",num,sum);

	return 0;
}






