#include <stdio.h>
#define MAX_LIMIT 1000

int fibonacci(int n);

int main() {
    int number;
    do
    {
    printf("number: ");
    scanf("%d", &number);
    }
    while(number<0);
    int x = fibonacci(number);
    printf("%d",x);
    return 0;
}

int fibonacci(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    int p = fibonacci(n-1)+fibonacci(n-2);
    return p;
}
