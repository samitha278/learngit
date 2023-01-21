#include <stdio.h>
#include <string.h>
#define max 100

char arr[][max] = {"jason","react","node","flask","ajx"};

char search(char n[max]);

int main(void){
    char x[max];
    printf("target: ");
    scanf("%s", x);
    
    for(int i=0;i<7;i++){
        if(strcmp(arr[i],x)==0){
            printf("found");
            return 0;
        }
    }
    printf("not found");
    return 1;
}
