#include <stdio.h>

void* func (int* x , int* y){
    *x = 23;
    *y = 38;
    printf("x = %d  y = %d\n",*x,*y);
    
}

int main(){
int a = 2 , b = 4;
printf("a = %d  b = %d\n",a,b);
func(&a,&b);
printf("a = %d  b = %d\n",a,b);
return 0;
}