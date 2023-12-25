#include <stdio.h>
int fibo(int);
int main() {
    int a;
    printf("Enter the number of terms: ");
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        printf(" series: %d ", fibo(i));
    }
    return 0;
}
int fibo(int a) {
    if (a<= 1) {
        return a;
    } else {
        return fibo(a - 1) + fibo(a- 2);
    }}
