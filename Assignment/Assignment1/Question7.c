#include <stdio.h>
int main() {
int x1 = 0, x2 = 1, nextTerm = 0, n;
printf("Enter a positive number: ");
scanf("%d", &n);
printf("Fibonacci Series: %d, %d, ", x1, x2);
nextTerm = x1 + x2;
while (nextTerm <= n) {
printf("%d, ", nextTerm);
x1 = x2;
x2 = nextTerm;
nextTerm = x1 + x2;
}
return 0;
}
