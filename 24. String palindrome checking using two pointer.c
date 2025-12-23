// Write a C program to check if a given string is a palindrome

#include <stdio.h>
#include <string.h>
int main() {

	char str1[50];
	int isPal;
	
	printf("Enter a string: ");
	scanf("%[^\n]",str);

	int l=0;
	int r = strlen(str)-1;

	while(l<r) {
		if(str[l]==str[r])
			isPal=1;
		else
			isPal=0;
	}

	if(isPal) {
		printf("The string is a palindrome");
	}
	else {
		printf("The string is not a palindrome");
	}

	return 0;
}

/*
OUTPUT:
Enter a string: racecar
The string is a palindrome
*/
