#include <stdio.h>
int rev(int num);
int rev(int num)
{
    int remender, reverse = 0;
    while (num != 0)
    {
        remender = num % 10; // To get last degit to store in remender
        reverse = (reverse * 10) + remender;
        num = num / 10; // To remove last digit from number
    }

    return reverse;
}

int main()
{
    int num;
    printf("Enter the number that you want to reverse\n");
    scanf("%d", &num);
    printf("The reverse number of %d is %d\n", num, rev(num));

    if (num == rev(num))
    {
        printf("Your number is palindrome");
    }
    else{
      printf("Your number is not palindrome");   
    }
    
    return 0;

}