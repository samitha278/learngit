#include <stdio.h>

int main(){
    int num1,num2;
    do{
        printf("range: ");
        scanf("%d", &num1);
        printf(" to ");
        scanf("%d", &num2);
    }while(num1<0 || num2<0);
    
    for(int i=num1;i<=num2;i++){
        if(i==0 || i==1)
            continue;
        else{
            int k=0;
            for(int j=1;j<=i;j++){
                if((i%j)==0)
                    k++;
            }
            if(k==2)
                printf("%d\n", i);
        }    
        
    }
    return 0;
}
