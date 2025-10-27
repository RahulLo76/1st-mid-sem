#include <stdio.h>
float sum(float a, float b){return a+b; }
float sub(float a, float b){return a-b; }
float pro(float a, float b){return a*b; }
float div(float a, float b){return a/b; }
int main(){
int choice;

float (*ptr [4]) (float, float)={sum,sub,pro,div};
printf("Enter The Choice:\n 0 for sum  1 for sub  2 for product  3 for divide\n");
scanf("%d",&choice);
float a ,b;
printf("Enter a and b:\n");
scanf("%f %f",&a,&b);
printf("%.2f",ptr[choice](a,b));
return 0;
}
                 