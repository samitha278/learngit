#include <stdio.h>

int mergesort(int size,int a[]){
    
    if(size==1)
        return 0;
    
    int n=size/2;    
    int left[n];
    int right[size-n];
    
    for(int i =0;i<size;i++){
        if(i<n)
            left[i]=a[i];
        else
            right[i]=a[i];
    }
    int sizeL=sizeof(left)/sizeof(int);
    int sizeR=sizeof(right)/sizeof(int);
    
    mergesort(sizeL,left);
    mergesort(sizeR,right);
    
    int merge[size*2];
    for(int i=0;i<size;i++){
        if(left[i]<right[i]){
            merge[i]=left[i];
            merge[i+1]=right[i];
        }else{
            merge[i]=right[i];
            merge[i+1]=left[i];
        }
    }
    return 0;
}


int main(){
    int a[]={3,2,5,7,0,6,1,4,};
    int size = sizeof(a)/sizeof(int);
    
    mergesort(size,a);
    
    for(int i=0;i<8;i++)
        printf("%d ",a[i]);
}
