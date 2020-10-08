#include<stdio.h>
int main(){
	int i, number, count;

	printf("Prime number from 2 to 200: ");
	for(int number=2; number<=200; number++){
		count = 0;
		for(int i=2; i<=number/2; i++){
			if(number%i==0){
				count++;
				break;
			}
		}
		if(count==0 && number !=1){
			printf(" %d ", number);
		}
	}
}