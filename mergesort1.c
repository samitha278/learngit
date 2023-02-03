#include <stdio.h>

int merge(int left[],int right[],int size,int a[]){
    int n=size/2;
    int x=size-n;
    int l=0; int r=0; int i=0;
    while(i<size){
        if(r==x && l==n-1){
            a[i]=left[l];
            l++;
        }else if(r==x-1 && l==n){
            a[i]=right[r];
            r++;
        }
        if(left[l]<right[r] && l<n){
            a[i]=left[l];
            l++;
        }else if(left[l]>right[r] && r<x){
            a[i]=right[r];
            r++;
        }
        i++;
    }
    return 0;
}

int mergesort(int size,int a[]){
    
    if(size==1)
        return 0;
    
    int n=size/2;    
    int left[n]; int right[size-n];
    
    for(int i =0;i<size;i++){
        if(i<n)
            left[i]=a[i];
        else
            right[i-n]=a[i];
    }
    
    mergesort(n,left);
    mergesort(size-n,right);
    
    merge(left,right,size,a);
    
    return 0;
}

int main(){
    int a[]={3,2,5,7,0,6,1,4,};
    int size = sizeof(a)/sizeof(int);
    
    mergesort(size,a);
    
    for(int i=0;i<8;i++)
        printf("%d ",a[i]);
}
