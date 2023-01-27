#include <stdio.h>

int reverse_num(int a);

int main()
{
    int number;
    scanf("%d", &number);
    
    if(reverse_num(number)==number)
        printf("%d is palindrome number", number);
    else
        printf("%d is not palindrome number", number);
    
    return 0;
}

int reverse_num(int a)
{  
    int reverseNum=0;
    while(a!=0)
    {
        int remaind = a%10;
        reverseNum=reverseNum*10+remaind;
        a/=10;
    }
    return reverseNum;
}
