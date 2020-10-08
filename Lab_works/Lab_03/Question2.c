#include <stdio.h>
int main(){
	char vowel;
	printf("Enter any alphabet to check vowel sound : ");scanf("%c", &vowel);
	switch(vowel){
		case 'A':
			printf("The alphabet is vowel sound");
			break;
		case 'a':
			printf("The alphabet is vowel sound");
			break;
		case 'E':
			printf("The alphabet is vowel sound");
		break;
		case 'e':
			printf("The alphabet is vowel sound");
			break;
		case 'I':
			printf("The alphabet is vowel sound");
			break;
		case 'i':
			printf("The alphabet is vowel sound");
			break;
		case 'O':
			printf("The alphabet is vowel sound");
			break;
		case 'o':
			printf("The alphabet is vowel sound");
			break;
		case 'U':
			printf("The alphabet is vowel sound");
			break;
		case 'u':
			printf("The alphabet is vowel sound");
			break;
		default:
			printf("The given alphabet is consonant sound");
	}
}
