#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("how long your number: ");
    scanf("%d", &n);
    char num[n];
    printf("Number: ");
    scanf("%s", num);
    
    int total=0;
    for(int i=0,m,o;i<n;i++){
        m=((int)num[i])-48;
        o=m*m*m;
        total+=o;
    }
    printf("%d\n",total);
    
    if(total==atoi(num))
        printf("%d is armstrong number",total);
    else
        printf("%s is not armstrong number",num);
    
    return 0;
}
