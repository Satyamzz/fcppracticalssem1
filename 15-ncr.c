#include <stdio.h>
int fact(int);
int ncr(int);
int main() {
    int n, r;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);
    printf("%dC%d is: %d\n", n, r, nCr(n, r));
    return 0;
}
int fact(int num) {
    if(num == 0 || num== 1) {
        return 1;
    } else {
        return num * fact(num - 1);
    }
}
int nCr(int n, int r) {
    if (r < 0 || r > n) {
        return 0;
    }
    return fact(n) / (fact(r) * fact(n - r));
}
