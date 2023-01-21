#include <stdio.h>
#define max 1000

int arr[max];

int search(int n);

int main(){
    int x;
    printf("target: ");
    scanf("%d", &x);
    
    for (int j=0;j<100;j++){
        arr[j]=j*2;
    }
    
    int y = search(x);
    if(y==0){
        printf("found");
    }else{
        printf("not found");
    }
    return 0;
}

int search(int n){
    for (int i=0;i<100;i++){
        if (arr[i]==n)
            return 0;
    }
    return 1;
}

