#include <stdio.h>

int swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    return 0;
}

int main(){
    int a[8]={7,5,0,1,4,3,6,2};
    int n=8;
    for(int k=0;k<n-1;k++){
        int j=0;
        for(int i=0;i<n-k-1;i++){
            if(a[i]>a[i+1]){
                swap(a+i,a+i+1);
                j++;
            }
        }
        if(j==0)
            break;
    }
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}
