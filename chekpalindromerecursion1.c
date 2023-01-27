#include <stdio.h>

int checker(int *a,int *b);

int main()
{
    int number;
    scanf("%d", &number);
    int num_copy=number;
    int num[10];
    int i=0;
    while(number!=0){
        int remaind = number%10;
        num[i]=remaind;
        number/=10;
        i++;
    }
    
    int value = checker(&num[0],&num[i-1]);
    
    if(value==0)
        printf("%d is palindrome number", num_copy);
    else
        printf("%d is not palindrome number", num_copy);
    
    return 0;
}

int checker(int *a,int *b)
{  
    if(a==b)
        return 0;
    else if(*a==*b){
        if(b-a==1)
            return 0;
        checker(a+1,b-1);
    }else
        return 1;
}
