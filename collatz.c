// Online C compiler to run C program online
#include <stdio.h>

int collatz(int n);

int main() {
    
    int number;
    printf("number: ");
    scanf("%d", &number);
    int y = collatz(number);
    printf("%d", y);
    return 0;
}

int collatz(int n){   
    
    if (n==1)
        return 0;
    else if (n%2 == 0 )
        return 1 + collatz((int)n/2);
    else
        return 1 +collatz((3*n) +1);
}
