#include<stdio.h>
#include<string.h>
int main(){
  FILE *file;
  char name[200]="CSE is very interesting";
  int len= strlen(name);
  file = fopen("test.txt","a");
  if(file==NULL){
    printf("File does not exist");
  }
    else{
       printf("File is opened.\n");
       for(int i=0;i<len;i++){
        fputc(name[i],file);
       }
       printf("FIle is writen successfully.");
       fclose(file);
    }
    return 0;
}

