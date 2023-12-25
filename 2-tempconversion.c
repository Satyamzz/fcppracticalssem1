
#include<stdio.h>
float cel_to_fah(float cel) {
    return (cel * 9 / 5) + 32;
}
float fah_to_cel(float fah) {
    return (fah - 32) * 5 / 9;
}

int main() {
    float cel, fah;
int a;
    printf("1- for fahrenheit to celcius \n 2-for celcius to fahrenheit\n");
scanf("%d", & a);
switch(a){
case 1:
    printf("Enter temperature in Celsius: ");
    scanf("%f", &fah);
    cel = fah_to_cel(fah);
    printf("Temperature in Fahrenheit: %.2f\n", cel);
    break;
    
case 2:
    printf("Enter temperature in Celsius: ");
    scanf("%f", &cel);
    fah = cel_to_fah(cel);
    printf("Temperature in Fahrenheit: %.2f\n", fah);
    break;
default:
printf("invalid");
}
    return 0;
}
