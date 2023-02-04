#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

node *head=NULL;
node *tail=NULL;

node *createNode(int x){
    node *newNode=(node *)malloc(sizeof(node));
    if(newNode==NULL)
        return NULL;
    newNode->data=x;
    newNode->next=NULL;
    return newNode;
}

int enqueue(int x){
    node *newNode=createNode(x);
    
    if(head==NULL){
        head=newNode;
        return 0;
    }
    node *tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    tail->next=newNode;
    return 0;
}

int dequeue(){
    if(head==NULL)
        return 1;
    node *temp=head->next;
    free(head);
    head=temp;
    return 0;
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
    
    return 0;
}
