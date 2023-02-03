#include <stdio.h>

int main(){
    int a[8]={3,2,5,7,0,6,1,4,};
    int size = sizeof(a)/sizeof(int);
    
    for(int i=1;i<size;i++){
        int value = a[i];
        int hole = i;
        
        while(hole>0 && a[hole-1] > value){
            a[hole]=a[hole-1];
            hole--;            
        }
        
        a[hole]=value;
    }
    for(int i=0;i<size;i++)
        printf("%d ",a[i]);
}



                    
