#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_LIMIT 100

int main(){
    char name[MAX_LIMIT];
    printf("your name: ");
    scanf("%s", name);
    
    char word[MAX_LIMIT];
    int i=0;
    int j=0;
    int value = 0;
    char ch;
    while(name[i]!='\0'){
        char ch = toupper(name[i]);
        if(isupper(ch)){
            word[j] = ch;
            value = (int) ch;
            j++;
        }
        i++;
    }
    printf("%s",word );
    
    
    
}
