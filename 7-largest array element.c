 Find Largest Element in an Array: Write a program that uses for loops to find the largest element in a 1-D array and returns it. 
#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5,6};
    int array_size = sizeof(arr) / sizeof(arr[0]);

    if (array_size == 0) {
        printf("Array is empty.\n");
        return 0;
    }

    int max_element = arr[0]; 

    for (int i = 1; i < array_size; i++) {
        if (arr[i] > max_element) {
            max_element = arr[i]; 
    }
}
    printf("The largest element in the array is: %d\n", max_element);

    return 0;
}

