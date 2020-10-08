#include <stdio.h>
int main(){
	int amount;
	int debit;
	int Credit;
	int mainbalance;
	int Option;
	printf("Deposit your initial amount : ");
	scanf("%d", &amount);
	if(amount >= 1000){
	printf("1. Credit \n");
	printf("2. Debit \n");
	printf("1. Balance enquiry \n");
	printf("Enter your option : ");scanf("%d", &Option);
	switch(Option){
		case 1:
			printf("Enter the amount you want to credit : ");
			scanf("%d", &Credit);
			mainbalance = amount + Credit;
			printf("Your bank balance is : %d", mainbalance);
			break;
		case 2:
			printf("Enter the amount you want to debit : ");
			scanf("%d", &debit);
			mainbalance = amount - debit;
			if(mainbalance < 0){
				printf("Your bank balance is zero");
			}
			else{
				printf("Your bank balance is : %d", mainbalance);
			}
			break;
		case 3:
			printf("Your bank balance is : %d", amount);
			break;
		default:
			printf("Your option is out of choice");
		}
	}
	else{
		printf("Your initial amount is not enough to deposit");
	}
}
