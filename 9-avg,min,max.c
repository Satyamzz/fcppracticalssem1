#include<stdio.h>
int main() {
    int n = 0, sum = 0;
    printf("Enter the number of elements for the array: ");
    scanf("%d", &n);
    int arr[n]; 
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int min = arr[0], max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    double avg = (double)sum / n; 
    printf("Average: %.2f\n", avg);
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
  return 0;
}
