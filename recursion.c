#include <stdio.h>
int Facto(int a){
    if (a == 0 || a == 1)
    {
        return 1;
    } else{
        return a * Facto(a - 1);
    }
    
}

int main(){
int a;
printf("Enter the Factorial Number:\n");
scanf("%d",&a);
Facto(a);
printf(" Factorial of %d is %d\n", a ,Facto(a));
return 0;
}