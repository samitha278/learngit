#include <stdio.h>
#define MAX_SIZE 100

int array[MAX_SIZE];
int i=0;

//push
int push(int a){
    array[i]=a;
    ++i;
    return 0;
}
//pop
int pop(){
    --i;
    array[i]=0;
    return 0;
}
//top
int top(){
    printf("%d",array[i-1]);
    return 0;
}
//isEmpty
int isEmpty(){
    if(array[0]==0){
        printf("0");
        return 0;
    }
    printf("1");
    return 1;
}

int main(){
    push(5);
    pop();
    push(6);
    pop();
    isEmpty();
    push(7);
    push(8);
    push(3);
    pop();
    top();
    isEmpty();
    
    return 0;    
}
