#include <stdio.h>
#include <string.h>

int main() {

  char A[1000];
  
  fgets(A,1000,stdin);
  
  int lenA = strlen(A);
  
  for(int i=lenA-1;i>=0;i--){
    printf("%c",A[i]);
  }
  
  return 0;
}
