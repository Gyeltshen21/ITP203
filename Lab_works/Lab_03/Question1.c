#include <stdio.h>
int main(){
	int marks;
	printf("Enter your marks out of 100 :");
	scanf("%d", &marks);
	if(marks > 0 || marks <= 100){
		switch(marks/10){
		case 10:
			printf("Grade A+\n");
			break;
		case 9:
			printf("Grade A+\n");
			break;
		case 8:
			printf("Grade A\n");
			break;
		case 7:
			printf("Grade B+\n");
			break;
		case 6:
			printf("Grade B\n");
			break;
		case 5:
			printf("Grade C+\n");
			break;
		case 4:
			printf("Grade C\n");
			break;
		case 3:
			printf("Grade D\n");
			break;
		case 2:
			printf("Grade F\n");
			break;
		case 1:
			printf("Grade F\n");
			break;
		default:
			printf("Grade F\n");
		}
	}
	else{
		printf("Your marks is invalid");
	}
}
