#include <stdio.h>
int checksize(intType,floatType,doubleType,charType,shortType,longType)
int intType;
float floatType;
double doubleType;
char charType;
short shortType;
long longType;
{
	// sizeof evaluates the size of a variable
	printf("Size of int: %ld bytes\n", sizeof(intType));
	printf("Size of float: %ld bytes\n", sizeof(floatType));
	printf("Size of double: %ld bytes\n", sizeof(doubleType));
	printf("Size of char: %ld byte\n", sizeof(charType));
	printf("Size of short: %ld byte\n", sizeof(shortType));
	printf("Size of long: %ld byte\n", sizeof(longType));
}

int checksignedsize(charType1,longType1,shortType1)signed short shortType1;
signed long longType1;
signed char charType1;
{
	printf("Size of signed-short: %ld bytes\n", sizeof(shortType1));
	printf("Size of signed-long: %ld bytes\n", sizeof(longType1));
	printf("Size of signed-char: %ld byte\n", sizeof(charType1));
}

int main(){
	int intType;
	float floatType;
	double doubleType;
	char charType;
	short shortType;
	long longType;
	signed short shortType1;
	signed char charType1;
	signed long longType1;
	checksize();
	checksignedsize();
}
