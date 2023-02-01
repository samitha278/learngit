//reverse string using stack
#include <stdio.h>

//create stack
char stack[10];
int top=-1;

//ccreate push function
int push(char a){
    top++;
    stack[top]=a;
    return 0;
}
//create pop function
char pop(){
    if(top==-1){
        printf("there's no element to pop");
        return 1;
    }
    top--;
    return stack[top+1];
}
    
int main() {
    //get user input
    char arr[10]="HELLO";
   
    
    //push string characters to stack
    for(int i=0;arr[i]!='\0';i++){
        push(arr[i]);
    }
    
    //pop caharacters from stack and store them array inorder
    for(int i=0;top!=-1;i++){
        arr[i]=pop();
    }
    
    printf("%s",arr);
    return 0;
}
