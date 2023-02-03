#include <stdio.h>

int main(void){
    int a[8]={3,2,5,7,0,6,1,4,};
    int size=sizeof(a)/sizeof(int);
    
    int index=0;
    
    for(int j=0;j<size-1;j++){
        int least=a[j];
        for(int i=j;i<size;i++){
            if(a[i]<least){
                least=a[i];
                index=i;
            }
        }
        a[index]=a[j];
        a[j]=least;
    }
    
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}
