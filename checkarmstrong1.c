#include <stdio.h>

int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d", &number);
    
    int counter=0;
    int copy_num=number;
    while(copy_num!=0)
    {
        int x = copy_num%10;
        int m = x*x*x;
        counter+=m;
        
        int y = (copy_num-x)/10;
        copy_num=y;
    }
    if(counter==number)
        printf("%d is Armstrong number", number);
    else
        printf("%d is Armstrong not number", number);
    return 0;
}
