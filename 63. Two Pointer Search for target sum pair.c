// To find a sum pair using two pointer techniquw

#include <stdio.h>

void findPair(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        int t = arr[left] + arr[right];

        if (t == target) {
            printf("Found it! The pair is: %d, %d\n", arr[left], arr[right]);
            return;
        } 
        else if (currentSum < target) {
            left++;
        } 
        else {
            right--;
        }
    }

    printf("No pair found for the given target.\n");
}

int main() {
    
    int numbers[] = {1, 2, 4, 5, 8, 9};
    int target = 10;
    int size = sizeof(numbers) / sizeof(numbers[0]);

    findPair(numbers, size, target);

    return 0;
}
