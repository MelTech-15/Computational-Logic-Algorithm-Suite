/*
Write a program to reverse words

Input Format

how are you

Constraints

It receives the string

Output Format

you are how

Sample Input 0

when are you coming
Sample Output 0

coming you are when
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void wrdwsrev(char* str) {
    
    int end = strlen(str);
    int start = end-1;
    
    while(start>0) {
    
    while(str[start]!=' ') {
        if(start==0) {
            start--;
            break;
        }
        else
            start--;      
    }
    for(int i=start+1; i<end; i++)
        printf("%c",str[i]);
    printf(" ");
    end = start;
    start--;
        
    }
}

int main() {

    char str[101];
    scanf("%[^\n]",str);
    
    wrdwsrev(str);
    
    return 0;
}
