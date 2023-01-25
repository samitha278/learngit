#include <stdio.h>
#include <stdlib.h>

int swap(char* a,char* b);

int main(){
    int u;
    printf("How many numbers in your number: ");
    scanf("%i" ,&u);
    
    char x[u];
    printf("Enter number: ");
    scanf("%s", x);
    
    int n = u/2;
    for(int i=0;i<n;i++){
        swap(&x[i],&x[u-1-i]);
    }
    printf("Reverse number: %s",x);
    return 0;
}

int swap(char* a,char* b){
    char tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}
