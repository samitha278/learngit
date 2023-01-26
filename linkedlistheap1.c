#include <stdio.h> 
#include <stdlib.h>

int main(){
    //create node structure
    typedef struct node{
        int number;
        struct node* next;
    }node;
    
    node* list;
    node* n=malloc(sizeof(node));
    if(n==NULL)
        return 1;
    (*n).number = 1;
    list=n; //link list
     
    n= malloc(sizeof(node));
    if(n==NULL)
        return 1;
    (*n).number=2;
    (*list).next=n;  //lint 1
    
    n= malloc(sizeof(node));
    if(n==NULL)
        return 1;
    (*n).number=3;
    (*((*list).next)).next=n; //link 2
    
    node* counter=list;
    while(counter!=NULL){
        node x = *counter;
        printf("%d", x.number);
        counter = x.next;
    }
    return 0;
}
