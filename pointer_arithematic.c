#include <stdio.h>

int main(){
int arr[]={78 , 87 , 56 , 98 , 80};
int* ptr = arr;
// printf("%d",*ptr);
ptr++;
// printf("%d",*ptr);
ptr=ptr+2;
printf("%d",*ptr);
return 0;
}