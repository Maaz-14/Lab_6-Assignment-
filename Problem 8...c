#include<stdio.h>
int main(){
	int i,n, flag=0,l=0,sl=1,temp=0;
	printf("Enter a number: ");
	scanf("%d",&n); //13 for example
	for( i=n-1;i>1;i--){  //i=12 , 12>1 , 12 11 10 ...
		if(n%i==0){ // checking factors IF it has factors than flag = 1
			flag=1;
		}
		
	}
	if(flag==1){
		printf("Not prime");
		
	}
	else{
		printf("Prime\n");
		
		printf("%d %d ",l,sl);
		for (i=n-2;i>0;i--){ // i=11 11>0 11 10 9....
			temp=l+sl;
			printf("%d ",temp);
			l=sl;//1
			sl=temp;//2 .... 
		}
	}
	return 0;
}
