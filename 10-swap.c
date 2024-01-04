 #include<stdio.h>
int main()
{int a=3,b=5;
//with third var
int temp;
temp=a;
a=b;
b=temp;
printf("with third variable a=%d b=%d\n",a,b);
//without third variable
a=a+b;
b=a-b;
a=a-b;
printf("without third variable a=%d b=%d",a,b);
return 0;
}
