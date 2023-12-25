#include<stdio.h>
int dia();
int main()
{ int arr[3][3]={1,2,3,4,5,6,7,8,9};
    printf("matrix\n");
    for(int i=0;i<3;i++)
     {for(int j=0;j<3;j++)
     {printf("%d ", arr[i][j]);}
         printf("\n");}
         int p=0;
  p=dia();
    printf("sum is %d",p);
}
int dia()
{int sum=0;
 int arr[3][3]={1,2,3,4,5,6,7,8,9};
    for(int k=0;k<3;k++)
    {sum=sum+arr[k][k];}
    return sum;
}
