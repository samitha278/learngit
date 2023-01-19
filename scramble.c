#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_LIMIT 100

int getValue(char name[]);
void compare();
int value1;
int value2;


int main(){
    char player1[MAX_LIMIT];
    char player2[MAX_LIMIT];
    printf("player1: ");
    scanf("%s", player1);
    printf("player2: ");
    scanf("%s", player2);
    
    value1 = getValue(player1);
    value2 = getValue(player2);
    
    compare();
    return 0;
}

int getValue(char name[]){

    int POINT[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    char word[MAX_LIMIT];
    int i=0;
    int j=0;
    int k=0; 
    int value = 0;
    char ch;
    while(name[i]!='\0'){
        char ch = toupper(name[i]);
        if(isupper(ch)){
            word[j] = ch;
            
            for(k=0;k<26;k++){
                if(word[j]==alphabet[k]){
                    value+=POINT[k];
                    
                }
            }
            j++;
        }
        i++;
    }
    return value;
    
}

void compare(){

    if(value1>value2){
        printf("player1 win!");
    }else if(value1<value2){
        printf("player2 win!");
    }else{
        printf("tie!");
    }
}
