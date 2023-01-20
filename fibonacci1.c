#include <stdio.h>
#define MAX_LIMIT 1000

int fibonacci(int n);

int main() {
    int number;
    printf("number: ");
    scanf("%d", &number);
    fibonacci(number);
    return 0;
}

int fibonacci(int n){
    int arr[MAX_LIMIT] = {0,1};
    if(n==0){
        printf("%d", arr[0]);
    }else if(n==1){
        printf("%d", arr[1]);
    }else{
        for(int i=2;i<n+1;i++){
           arr[i]=arr[i-1]+arr[i-2]; 
        }
        printf("%d",arr[n]);
    }
    
}
