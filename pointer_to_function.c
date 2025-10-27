#include <stdio.h>
int add(int,int);
int add(int a,int b){
   return a + b;

}
int main(){
int a , b;
printf("Enter The Value of A and B:\n");
scanf("%d %d",&a,&b);
int(*ptr) (int,int) = add;

printf("The Addition of %d + %d = %d",a,b,ptr(a,b));
return 0;
}