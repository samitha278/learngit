#include <stdio.h> 

int main(){
    //create node structure
    typedef struct node{
        int num;
        struct node* next;
    }node;
    
    node n1; //create n1 node
    n1.num = 1;
    
    node n2; //create n2 node
    n2.num = 2;
    
    node n3; //create n3 node
    n3.num = 3;
    
    node* list; //create list pointer
    
    list = &n1; //link list & n1
    n1.next=&n2; //link n1 & n2 
    n2.next=&n3; //link n2 & n3
    
    node n4; //create n4 node
    n4.num = 4;
    
    n3.next=&n4; //link n3 & n4
    n4.next=NULL; //list over here
    
    node* counter = list;
    while(counter!=NULL){
        node x = *counter;
        printf("%d", x.num);
        counter=x.next;
    }
    return 0;
}
