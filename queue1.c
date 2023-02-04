#include <stdio.h>

int a[10];
int front=-1;

int frontone(){
    printf("%d", a[front]);
    return 0;
}

void enqueue(int x){
    front++;
    if(a[0]==0)
        a[front] =x;
    else{
        for(int i=0;i<front;i++){
        a[front-i]=a[front-1-i];
        }
        a[0]=x;
    }
}

int dequeue(){
    front--;
    return a[front+1];
}

int isempty(){
    if(a[0]==0){
        printf("yes");
        return 0;
    }else{
        printf("no");
        return 1;
    }
}


int main() {
    enqueue(2);
    enqueue(7);
    enqueue(5);
    dequeue();
    enqueue(9);
    enqueue(6);
    dequeue();
    enqueue(3);
    
    frontone();
    
    return 0;
}
