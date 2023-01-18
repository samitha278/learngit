#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_SIZE 100

int main(){
    char player1[MAX_SIZE];
    char player2[MAX_SIZE];
    
    printf("player 1: ");
    scanf("%s", player1);
    printf("player 2: ");
    scanf("%s", player2);
    
    
    int POINT[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};

    char alphabet1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char alphabet2[] = "abcdefghijklmnopqrstuvwxyz";
    int i;
    for(i=0;i<26;i++){
        alphabet1[i] = POINT[i];
        alphabet2[i] = POINT[i];
    }

    
    int value1;
    int value2;
    int l;
    int m = strlen(player1);
    int n = strlen(player2);
    for(l=0;l<m;l++){
        if('a'<player1[l]<'z' || 'A'<player1<'Z'){
            value1+=player1[l];
        }else{
            continue;
        }
        
    }
    for(l=0;l<m;l++){
        if('a'<player1[l]<'z' || 'A'<player1<'Z'){
            value2+=player2[l];
        }else{
            continue;
        }
    }
    
    if(value1 > value2){
        printf("player1 win\n");
    }else if(value1 < value2){
        printf("player2 win\n");
    }else{
        printf("tie!\n");
    }
    
    return 0;
    
}
