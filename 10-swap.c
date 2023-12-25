   #include <stdio.h>
void WithVariable(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping using a third variable:\nnum1 = %d, num2 = %d\n", a, b);
}

void WithoutVariable(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping without using a third variable:\nnum1 = %d, num2 = %d\n", a, b);
}
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Before swapping:\nnum1 = %d, num2 = %d\n", num1, num2);
    Withvariable(num1, num2);
    printf("Before swapping:\nnum1 = %d, num2 = %d\n", num1, num2);
    Withoutvariable(num1, num2);
    return 0;
}
