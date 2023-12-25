
#include<stdio.h>
int main()
{
    int i=0;
    int a,b,c;
    printf("1 for add,2 for subtract,3 for divison,4 for multiplication,5 for exponent");
    printf("\n");
    printf("enter value of i,a and b:");
    
    scanf("%d %d %d",&i,&a,&b);
    switch(i)
    {
        case 1:
       c=a+b;
        printf("additon= %d",c);
        break;
        case 2:
      c=a-b;
        printf("subtraction=%d",c);
        case 3:
     c=a*b;
        printf("multiplication= %d",c);
        break;
        case 4:
       c=a/b;
        printf("division=%d",c);
        case 5:
        c=a^b;
        printf("exponential=%d",c);
    }
return 0;
}
