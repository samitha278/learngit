#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_LIMIT 100


int main(){
    char name[MAX_LIMIT];
    printf("your name: ");
    scanf("%s", name);
    
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
                if(word[j]==alphabet[k]){value+=POINT[k];}
            }
            j++;
        }
        i++;
    }
    printf("%s %d",word, value );
    
}

