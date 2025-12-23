/*
Write a program to delete an element from the given array.

Input Format

6
5 6 3 9 8 7
9

Constraints

Input should be an array

Output Format

5 6 3 8 7

Sample Input 0

8
5 6 7 1 3 2 9 8
9
Sample Output 0

5 6 7 1 3 2 8
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void dele(int arr[], int n, int d) {
    for(int i=0; i<n; i++) {
        if(arr[i]==d)
            continue;
        printf("%d ",arr[i]);
    }
}

int main() {

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    int d;
    scanf("%d",&d);
    dele(arr,n,d);
    return 0;
}
