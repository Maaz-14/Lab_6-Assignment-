#include<stdio.h>
int main(){
	int fuel_needed,option;
	float sum=0;
	const float perunitfuel=1.50;
	printf("Select the option: (1) for start refueling\n (2) to stop refueling!\n");
	scanf("%d",&option);
	while (option<=0 || option >2){
		printf("Select the option: (1) for start refueling\n (2) to stop refueling!\n");
		scanf("%d",&option);
	}
	while (option !=2){
		printf("Enter liters of fuel you want to fill: ");
		scanf("%d",&fuel_needed);
		sum=sum+fuel_needed*perunitfuel;
		printf("Select the option: (1) for start refueling\n (2) to stop refueling!\n");
		scanf("%d",&option);
					
	}		
	printf("Refueling stopped: ");
	printf("Total cost is %.2f\n",sum);
		
	
	
	printf("..............\n");
	printf("\n BILL \n");
	printf("..............\n");
	printf("Fuel refilled:   %d \n",fuel_needed);
	printf("\nPer unit fuel: %.2f\n",perunitfuel);
	printf("..............\n");
	printf("\n Total Cost:   %.2f\n",sum);
	printf("..............\n");
	
	return 0;
}	

