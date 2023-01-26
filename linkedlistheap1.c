#include <stdio.h> 
#include <stdlib.h>

int main()
{
    //create node structure
    typedef struct node{
        int number;
        struct node* next;
    }node;
    
    node* list;
    node* n=malloc(sizeof(node));
    if(n==NULL)
        return 1;
    n->number = 1;
    list=n; //link list
     
    n= malloc(sizeof(node));
    if(n==NULL)
        return 1;
    n->number=2;
    list->next=n;  //lint 1
    
    n= malloc(sizeof(node));
    if(n==NULL)
        return 1;
    n->number=3;
    list->next->next=n; //link 2
    list->next->next->next=NULL;
    node* counter=list;
    while(counter!=NULL){
        printf("%d", counter->number);
        counter = counter->next;
    }
    n=malloc(sizeof(node));
    if(n==NULL)
      return 1;
    n->number=4;
    
    counter = list;
    for(int i=0;i<3;i++)
    {
      counter=counter->next;
      if(i==1)
        counter->next=n;
      if(i==2)
        counter->next=NULL; 
    }
    counter=NULL;
    n=NULL;
    return 0;
}
