/*18. Multi-level Menu using Switch Case: Write a program to create a multi-level menu using
switch cases that perform various basic mathematical operations (Add, Subtract, Divide,
Multiply, Exponent).
*/

#include<stdio.h>
int main()
{
    int i=0;
    int x,y,z;
    printf("1 for add,2 for subtract,3 for divison,4 for multiplication,5 for exponent");
    printf("\n");
    printf("enter value of i,x and y:");
    
    scanf("%d%d%d",&i,&x,&y);
    switch(i)
    {
        case 1:
        z=x+y;
        printf("additon= %d",z);
        break;
        case 2:
        z=x-y;
        printf("subtraction=%d",z);
        case 3:
        z=x*y;
        printf("multiplication= %d",z);
        break;
        case 4:
        z=x/y;
        printf("division=%d",z);
        case 5:
        z=x^y;
        printf("exponential=%d",z);




    }
return 0;

}