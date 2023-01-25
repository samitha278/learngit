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
    
    swap(&x[0],&x[u-1]);
    
    printf("Reverse number: %s",x);
    return 0;
}

int swap(char* a,char* b){
    if(a==b)
        return 0;
    if(b-a == 1)
        return 0;
        
    swap(a+1,b-1);
    
    char tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}
