#include <stdio.h>

int main() {
    int n,a[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    // Step 1: Find the maximum number
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
    }
    // Step 2: Perform counting sort for each digit
    for (int exp = 1; max / exp > 0; exp *= 10) {
        int output[n];
        int count[10] = {0};
        // Count occurrences of digits
        for (int i = 0; i < n; i++) {
            int digit = (a[i] / exp) % 10;
            count[digit]++;
        }
        // Update count[] to store actual positions
        for (int i = 1; i < 10; i++) {
            count[i] += count[i - 1];
        }
        // Build the output array
        for (int i = n - 1; i >= 0; i--) {
            int digit = (a[i] / exp) % 10;
            output[count[digit] - 1] = a[i];
            count[digit]--;
        }
        // Copy sorted values back to a[]
        for (int i = 0; i < n; i++) {
            a[i] = output[i];
        }
    }
    // Step 3: Print the sorted array
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}