#include <stdio.h>

int a[10];
int front=0;
int tail=-1;

int frontone(){
    printf("%d", a[front]);
    return 0;
}

void enqueue(int x){
    tail++;
    a[tail]=x;
}

int dequeue(){
    if(a[0]==0){
        printf("there's nothing to dequeue");
        return 1;
    }
    for(int i=0;i<tail;i++){
        a[0+i]=a[1+i];
    }
    tail--;
    return a[tail+1];
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
