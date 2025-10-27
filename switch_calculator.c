#include <stdio.h>

float sum(float a, float b) { return a+b; }
float sub(float a, float b) { return a-b; }
float product(float a, float b) { return a*b; }
float divide(float a, float b) { return a/b; }


int main(){
    int choice;
    float a,b;
    printf("Enter Your Choice:\n0 for sum  1 for sub  2 for product  3 for divide\n");
    scanf("%d",&choice);
printf("Enter the Two Numbers :\n");
scanf("%f %f",&a,&b);

switch (choice)
{
case 0:
    printf("The addition of %f + %f = %f",a,b,sum(a,b));
    break;
case 1:
    printf("The subtraction of %f - %f = %f",a,b,sum(a,b));
    break;
case 2:
    printf("The product of %f X %f = %f",a,b,sum(a,b));
    break;
case 3:
    printf("The division of %f / %f = %f",a,b,sum(a,b));
    break;

default: printf("Invalid input! Please enter a number between 0 and 3.\n");
    break;
}
return 0;
}