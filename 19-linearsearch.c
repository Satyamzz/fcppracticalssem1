#include <stdio.h>
int main() 
{
    int arr[20]={1,2,3,5,6,43,7,8,10};
    int i;int a;
    printf("enter searching element");
    scanf("%d",&a);
    for(i=0;i<20;i++){
        if (arr[i]==a)
        {
            printf("%d is found at %d",a,i+1);
            break;
        }
    }
}
