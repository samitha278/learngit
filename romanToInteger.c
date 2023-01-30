#include <stdio.h>

int romanToInt(char* s);

int main(){
    char input[]="XXIV";
    int value = romanToInt(input);
    printf("%d", value);
    return 0;
}

int romanToInt(char* s){
    char roman[]="IVXLCDM";
    int integer[]={1,5,10,50,100,500,1000};

    int sum=0;
    int i=0;
    while(s[i]!='\0'){
        for(int j=0;j!=8;++j){
            if(s[i]==roman[j]){
                sum+=integer[j];
                j=7;
            }
        }
        if(0<i){
            if(((s[i]=='V') || (s[i]=='X')) && (s[i-1]=='I'))
                sum-=2;
            else if(((s[i]=='L') || (s[i]=='C')) && (s[i-1]=='X'))
                sum-=20;
            else if(((s[i]=='D') || (s[i]=='M')) && (s[i-1]=='C')) 
                sum-=200;
        }
        ++i;
    }
    return sum;
}
