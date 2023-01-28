#include <stdio.h>

int main() {
    int sizeArr;
    printf("size of array: ");
    scanf("%d", &sizeArr);
    
    int num[10];
    printf("nums: ");
    for(int i=0;i<sizeArr;i++){
        scanf("%d", &num[i]);
    }
    
    int target;
    printf("target: ");
    scanf("%d", &target);
    
    int n = sizeArr;
    int sum = 0;
    for(int j=0;j<n;j++){
        for(int k=j+1;k<n;k++){
            sum = num[j] + num[k];
            if(sum==target)
                printf("indexes of nums: %d, %d", j ,k);
        }
    }
    
    return 0;
}
