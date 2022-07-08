#include <stdio.h>
#include <string.h>

int main() {

  // strcmp ±¸Çö  
  
  char A[100], B[100];
  
  scanf("%s",A);
  scanf("%s",B);
  
  int lenA,lenB;
  lenA=strlen(A);
  lenB=strlen(B);
  int idx = 0;
  int result=0;
  
  if(lenA==lenB){
    
    bool flag = false;
    for(int i=0;i<lenA;i++){
      if(A[i] != B[i]){
        flag = true;
      }
    }
    if(flag == true){
        printf("Diffenret!\n");
      }
      else{
        printf("same!\n");
      }
  }
  else{
    printf("Diff\n");
  }
  return 0;
}
