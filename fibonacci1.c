#include <stdio.h>
#define MAX_LIMIT 1000

int fibonacci(int n);

int main() {
    int number;
    printf("number: ");
    scanf("%d", &number);
    int x = fibonacci(number);
    printf("%d",x);
    return 0;
}

int fibonacci(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    int y = fibonacci(n-1);
    int z = fibonacci(n-2);
    int p = z+y;
    return p;
}
