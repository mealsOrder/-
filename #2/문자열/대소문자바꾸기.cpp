#include <stdio.h>
#include <string.h>


/**
대문자 소문자로 바꾸기 
**/
int main() {

  //Please Enter Your Code Here
  
  char A[1000];
  
  fgets(A, 1000, stdin);
  // 65 ~ 97
  
  int lenA;
  lenA = strlen(A);
  
  for(int i =0;i<lenA;i++){
    
    if(A[i] != 0){
    	if (A[i]>=65 && A[i]<=90){
      		A[i] += 32;
    	}
    	else if(A[i]>=97 && A[i]<=122){
      		A[i]-= 32;
    	}
	}
    

  }
  
  
  printf("%s",A);
  
  return 0;
}
