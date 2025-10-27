#include <stdio.h>

int main(){
int a = 4;
int* ptr = &a;
int**pptr = &ptr;

printf("The Value at by Variable is %d\n",a);
printf("The Value at by pointer is %d\n",*ptr);
printf("The Value at by pointer to pointer is %d\n",**pptr);

printf("The Address of a by Variable a is %u\n",&a);
printf("The Address of a by pointer ptr is %u\n",ptr);
printf("The Address of ptr by pointer ptr is %u\n",&ptr);
printf("The Address of ptr by pointer pptr is %u\n",pptr);
printf("The Address of pptr by pointer pptr is %u\n",&pptr);
printf("The Address of pptr by pointer pptr is %u\n",&*(*pptr));

return 0;
}