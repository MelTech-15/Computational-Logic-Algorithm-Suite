// Write a C program to find the length of a given string using user-defined function

#include <stdio.h>
#include <string.h>

int slen(char[] str) {
  int len=0;
  for(int i=0; str[i]!='\0'; i++) {
    len+=1;
  }
  return len;
}

int main () {
    char str[50];
    printf("Enter a string to find its length: ");
    scanf("%s",str);
    
    int len = slen(str);
    
    printf("Length of the string: %d",len);
    
    return 0;
}

/*
OUTPUT:
Enter a string to find its length: computer
Length of the string: 8
*/
