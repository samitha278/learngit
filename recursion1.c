#include <stdio.h>

int draw(int n);
int drawLine(int m);

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
    drawLine(n);
    printf("\n");
}

int drawLine(int m){
    if(m==0)
        return;
    drawLine(m-1);
    printf("#");
}
