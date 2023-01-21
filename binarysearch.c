#include <stdio.h>

int main(){
    int arr[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13};
    int x;
    printf("target: ");
    scanf("%d", &x);
    int start =0;
    int end =14;
    
    while(start<end){
        int m = (start + end)/2;
        if(arr[m]==x){
            printf("found");
            return 0;
        }else if(arr[m]>x){
            end = m-1;
        }else{
            start = m+1;
        }
    }
    printf("not found");
    return 1;
}
