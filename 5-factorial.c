#include <stdio.h>
int main() {
    int num,factorial=1;
    printf("Enter a positive integer: ");
    scanf("%d", & num);
for(int i=1;i<=num;++i) 
{
     factorial=factorial*i;}
    printf("%d",factorial);
}
