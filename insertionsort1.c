#include <stdio.h>

int main(){
    int a[8]={3,2,5,7,0,6,1,4,};
    int size = sizeof(a)/sizeof(int);
    
    for(int i=1;i<size;i++){
        if(a[i-1]>a[i]){
            int j = 0; 
            while(a[i]>a[j]){
                j++;
            }
            int temp=a[i];
            for(int k=0;k<(i-j);k++){
                a[i-k]=a[i-k-1];
            }
            a[j]=temp;
        }
        else
            continue;
    }
    for(int i=0;i<size;i++)
        printf("%d ",a[i]);
}



                    
