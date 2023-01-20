#include <stdio.h>

int draw(int n);

int main() {
    int height;
    printf("height: ");
    scanf("%d", &height);
    draw(height);
    return 0;
}

int draw(int n){
    if(n==0)
        return 1;
        
    draw(n-1);
    
    for(int i=0; i<n;i++){
      printf("#");
    }
    printf("\n");
}
