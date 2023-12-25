Basic Array Operations: Write a program to traverse an array and print the odd-indexed elements. 
#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5,6,7,8};
    int array_length = sizeof(arr) / sizeof(arr[0]);

    printf("Odd-indexed elements:\n");
    for (int i = 1; i < array_length; i += 2) {
        printf("%d\n",arr[i]);
    }

    return 0;
}
