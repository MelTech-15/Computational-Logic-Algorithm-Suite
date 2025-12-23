// Write a C program to reverse a given string using user-defined function

#include <stdio.h>
#include <string.h>

void strrev(char* str) {
    int len = strlen(str);
    
    int i=0;
    int j=len-1;
    
    while(i<j) {
        int t = str[i];
        str[i] = str[j];
        str[j] = t;
        
        i++;
        j--;
    }
}

int main() {
    char str[50];
    
    printf("Enter a string to be reversed: ");
    scanf("%[^\n]",str);
    
    strrev(str);
    
    printf("Reversed string: ");
    puts(str);
}

/*
OUTPUT:
Enter a string to be reversed: we have college tmrw
Reversed string: wrmt egelloc evah ew
*/
