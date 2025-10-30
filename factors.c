#include <stdio.h>
void factors(int n);
void factors(int n){
   for (int i = 1; i <= n; i++)
   {
    if (n % i ==0)
    {
        printf("The factor of %d is %d \n",n,i);
    }
    // printf("\n");
   }
   
}

int main(){
int num;
printf("Enter the Number of The Factor You want\n");
scanf("%d",&num);
factors(num);
return 0;
}
