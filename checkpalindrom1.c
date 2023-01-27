#include <stdio.h>
#include <string.h>

int swap(char *a, char *b);

int main()
{
    char number[20];
    printf("Enter Number: ");
    scanf("%s", number);
    char num_copy[20];
    strcpy(num_copy,number);
    for(int i=0,n=strlen(number); i<n/2;i++)
    {
        swap(&number[i],&number[n-1-i]);
    }
    
    if(strcmp(num_copy,number)==0)
        printf("%s is palindrom number", num_copy);
    else
        printf("%s is not palindrom number", num_copy);
    return 0;
}

int swap(char *a, char *b)
{
    char tmp = *a;
    *a = *b;
    *b = tmp;
}
