#include <stdio.h>
#define max 1000

char arr[max];

int search(int n);

int main(){
    int x;
    printf("target: ");
    scanf("%d", &x);
    
    for (int j=0;j<50;j++){
        arr[j]=j*2;
    }
    int y = search(x);
    return 0;
}

int search(int n){
    for (int i=0;i<50;i++){
        if (arr[i]==n){
            printf("found");
            return 0;
        }
    }
    printf("not found");
    return 1;
}

