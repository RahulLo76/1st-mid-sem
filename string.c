#include <stdio.h>
#include <string.h>

int main(){
char name[50];
for (int i = 0; i < 5; i++)
{
    fgets(name , 50 , stdin);
}
for (int i = 0; i < 5; i++)
{
    puts(name);
    
}



return 0;
}