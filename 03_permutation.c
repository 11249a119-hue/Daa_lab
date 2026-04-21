// Permutation Problem Using Recursion
// Generates all permutations of a given array

#include <stdio.h>

void perm(int arr[], int start, int stop) {
    int temp, i;
    if (start == stop) {
        for (i = 0; i < stop; i++)
            printf("\t%d", arr[i]);
        printf("\n");
    } else {
        for (i = start; i < stop; i++) {
            // Swap arr[i] and arr[start]
            temp = arr[i];
            arr[i] = arr[start];
            arr[start] = temp;

            perm(arr, start + 1, stop);

            // Swap back (backtrack)
            temp = arr[i];
            arr[i] = arr[start];
            arr[start] = temp;
        }
    }
}

void main() {
    int n, i, a[10];
    printf("Enter total number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    perm(a, 0, n);
}
