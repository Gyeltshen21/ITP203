#include <stdio.h>
int main() {
int num, Number, remainder, result = 0;;
printf("Enter a three-digit number: ");
scanf("%d", &num);
Number = num;
while (Number != 0) {
// remainder contains the last digit
remainder = Number % 10;
result += remainder * remainder * remainder;
// removing last digit from the orignal number
Number = Number/ 10;
}
if (result == num)
printf("%d is an Armstrong number.", num);
else
printf("%d is not an Armstrong number.", num);
printf("\n");
return 0;
}
