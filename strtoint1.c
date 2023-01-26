
#include <stdio.h>

int giveInt(char a[]);
int powerV(int a,int b);
int num;
    
int main(){
    printf("How many characters in your string: ");
    scanf("%d", &num);
    char str[num+1];
    printf("Type here your string: ");
    scanf("%s", str);
    
    int d = giveInt(str);
    printf("%d\n",d);
    return 0;
}

int giveInt(char a[]){
    
    int i=0;
    int number=0;
    while(a[i] != '\0'){
        if(48<=(int)a[i] && (int)a[i]<=57){
            int y=sizeof(a)-1;
            number+=((int)a[i]-48) * powerV(10,y);
            y++;
        }
        i++;
    }
    return number;    
}
int powerV(int a,int b){
    int x=1;
    for(int i=0;i<b;i++){
        x*=a;
    }
    return x;
}
