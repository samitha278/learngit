#include <stdio.h>

int main() {
  
  FILE* myfile=fopen("writefile.csv","ab");
  if(myfile==NULL){
    printf("error occured while opening file");
    return 1;
  }
    
  int number=0;
  while(number!=21){
    int ele = fprintf(myfile, "%d %d %d\n", number, (number*number), (number*number*number));
    if(ele<=0){
      printf("error occured while printing numbers");
      return 1;
      }
    number++;
  }
  int result= fclose(myfile);
  if(result==EOF)
    printf("error ocurred while closing file");
  
  return 0;
}
