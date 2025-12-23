/*
Need to write a program to print the Pyramid Pattern.

Input Format

input consists of a single integer represent the n value

Constraints

1<=n>=10

Output Format

n lines, each showing:

Star Left Half Pyramid

Number Left Half Pyramid

Alphabet Left Half Pyramid (one by one , aligned with spaces)

Sample Input 0

4
Sample Output 0

      * 
    * * * 
  * * * * * 
* * * * * * *
      1 
    1 2 3 
  1 2 3 4 5 
1 2 3 4 5 6 7
      A 
    A B C 
  A B C D E 
A B C D E F G
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printPyramid(int n, char type) {
    for(int i = 1; i <= n; i++) {
        
        for(int j = 1; j <= n - i; j++) {
            printf("  ");
        }

        
        for(int j = 1; j <= 2*i - 1; j++) {
            if(type == '*') printf("* ");
            else if(type == 'n') printf("%d ", j);
            else if(type == 'c') printf("%c ", 'A' + j - 1);
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);

    printPyramid(n, '*'); 
    printPyramid(n, 'n'); 
    printPyramid(n, 'c'); 

    return 0;
}
