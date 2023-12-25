
#include<stdio.h>
void swap(int *x,int *y);
int main()
{
    int a=10,b=20;
    printf("a = %d b = %d\n",a,b);
    swap(&a,&b);
    printf("a = %d b = %d\n",a,b);
    return 0;
}
void swap(int *x,int *y)
{
    int p;
    p=*x; 
    *x=*y;
    *y=p;
}
