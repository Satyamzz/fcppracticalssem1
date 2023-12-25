//23. Call by Reference Using Pointers: Write a program to demonstrate call by reference using
//pointers in functions.
#include<stdio.h>
int main(){
    int a,*b,**c;
    a=4;
    b=&a;
    printf("Value of a=%d",(*b));
}
