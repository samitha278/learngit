#include <stdio.h>

int reverse_num(int a);

int int_length(int b);

int int_power(int c,int d);

int main()
{
    int number;
    scanf("%d", &number);
    
    int reverse_1 = reverse_num(number);
    
    if(reverse_1==number)
        printf("%d is palindrome number", number);
    else
        printf("%d is not palindrome number", number);
    
    return 0;
}

int reverse_num(int a)
{  
    int reverseNum=0;
    int j = int_length(a);
    while(a!=0)
    {
        int x = a%10;
        int y = (a-x)/10;
        a=y;
        int z = int_power(10,j-1);
        reverseNum+=(x*z);
        j--;
    }
    return reverseNum;
}

int int_length(int b)
{
    int counter=0;
    while(b!=0)
    {
        int k = b%10;
        int l = (b-k)/10;
        b=l;
        counter++;
    }
    return counter;
}

int int_power(int c,int d)
{
    int w=1;
    for(int i=0;i<d;i++)
    {
        w*=c;
    }
    return w;
}
