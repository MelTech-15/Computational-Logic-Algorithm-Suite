/*
Write a program to print the elements of an array that lie between the given start index and end index (both inclusive). Assume 0-based indexing.

Input Format

The first line contains an integer n, representing the number of elements in the array.

The second line contains n space-separated integers.

The third line contains two integers L and R, representing the start and end indices.

Constraints

1 <= n <= 20 0 <= L < R < n

Output Format

Print all the elements from index L to R (both inclusive) separated by spaces.

Sample Input 0

7
2 3 1 4 9 8 7
1 4
Sample Output 0

3 1 4 9
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void prirange(int n, int a[]) {
    int s,l;
    scanf("%d %d",&s,&l);
    for(int i=s; i<=l; i++) {
        printf("%d ",a[i]);
    }
}

int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n;i++) {
        scanf("%d",&a[i]);
    }
    prirange(n,a);
    return 0;
}
