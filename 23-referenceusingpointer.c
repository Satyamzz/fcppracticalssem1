
#include<stdio.h>
int main(){
    int a,*b,**c;
    a=4;
    b=&a;
    printf("Value of a=%d",(*b));
}
