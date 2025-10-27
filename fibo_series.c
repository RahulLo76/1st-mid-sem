#include <stdio.h>
int fibo(int a);
// finacci series :- 0,1,1,2,3,5,8,13,21,34.........n

int fibo(int a){
   if (a == 1 || a == 2)
   {
    return a - 1;
   }
   else{
    return fibo( a-1)+ fibo(a-2);
   }
   

}
int main(){
int a;
printf("Enter The Number\n");
scanf("%d",&a);
printf("The FIbonachi series of %d is %d\n",a,fibo(a));
return 0;
}