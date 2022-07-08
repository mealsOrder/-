#include <stdio.h>
#include <string.h>

int main() {

  char myString[100];
  
  scanf("%s",myString);
  
  //printf("%s\n",myString);
  int cnt=0;
  int idx = 0;
  while(1){
    if(myString[idx]=='\0'){
      break;
    }
    else{
      cnt++;
      
    }
    idx ++;
  }
  printf("%d\n",cnt);
  
  printf("%d\n",strlen(myString));
  return 0;
}
