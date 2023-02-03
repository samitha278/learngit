#include <stdio.h>
#define MAX 10000000

int main(){
    int a[8]={3,2,5,7,0,6,1,4,};
    int size = sizeof(a)/sizeof(int);
    int sor[size];
    int index = 0;
    
    for(int j=0;j<size;j++){
        int least=MAX;
        for(int i=0;i<size;i++){
            if(least>a[i]){
                least =a[i];
                index=i;
            }
        }
        sor[j]=least;
        a[index]=MAX;
    }
    
    for(int i=0;i<size;i++)
        printf("%d ",sor[i]);
        
    return 0;
}
