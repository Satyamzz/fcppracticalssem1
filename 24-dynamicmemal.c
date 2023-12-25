
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *m,n;
    printf("Enter n value :");
    scanf("%d",&n);
    m=(int*)malloc(n*2);
    printf("Entering integers:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",m+i);
    }
    free(m);
    printf("%d",m);
}
