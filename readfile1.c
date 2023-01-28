#include <stdio.h>

int main() {

  FILE *myfile = fopen("writefile.csv", "r");
  
  if (myfile == NULL) {
    printf("error occured while opening file");
    return 1;
  }
  
  char ch[1000];
  fscanf(myfile, "%[^\n]", ch);
  printf("%s\n", ch);

  int result = fclose(myfile);
  if (result == EOF){
    printf("error ocurred while closing file");
    return 1;
    }
  
  return 0;
}
