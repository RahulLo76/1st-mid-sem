#include <stdio.h>
int Rabbit = 39;

void func(){
    printf("Rabbit = %d\n",Rabbit);

}
int main(){
printf("Rabbit = %d\n",Rabbit);
Rabbit = 20;
printf("Rabbit = %d\n",Rabbit);
func();
return 0;
}