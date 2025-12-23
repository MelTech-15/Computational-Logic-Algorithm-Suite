/*
Write a program to print vowels alone

Input Format

rajendran

Constraints

Input should be a string

Output Format

aea

Sample Input 0

venkat
Sample Output 0

ea
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void vowstr(char* str) {
    for(int i=0; i<strlen(str); i++) {
        char ch = toupper(str[i]);
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            printf("%c",str[i]);
    }
}

int main() {

    char str[101];
    scanf("%[^\n]",str);
    vowstr(str);
    return 0;
}
