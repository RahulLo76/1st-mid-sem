#include <stdio.h>
#define PI 3.1415//macros --> PI = 3,1415
#define circleArea(r) (PI * r * r);// macro --> r = PI*r*r
int main(){
printf("%.4lf\n",PI);
//Area of Circle
double radius = 12.6;

double area_circle = PI * radius * radius;

double area = circleArea(radius);

printf("%.2lf\n",area_circle);

printf("%.2lf",area);

return 0;
}