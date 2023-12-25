#include <stdio.h>
void rev_str(char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    int start = 0;
    int end = length - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main() {
    char inputString[] = "Hello, World!";
    printf("Original string: %s\n", inputString);
    rev_str(inputString);
    printf("Reversed string: %s\n", inputString);
    return 0;
}
