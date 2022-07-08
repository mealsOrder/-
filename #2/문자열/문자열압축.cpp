#include <stdio.h>
#include <string.h>
int main() {

  //Please Enter Your Code Here
  char a[1001];
  
  int cnt = 1;
  
  fgets(a,1000,stdin);
  int lenA = strlen(a);
  
  for(int i=0;i<lenA;i++){
    if(a[i]==a[i+1]){
      cnt++;
    }
    else {
      if(cnt<=1){
        printf("%c",a[i]);
      }
      else{
        printf("%d",cnt);
        printf("%c",a[i]);
      }
      
      cnt = 1;
    }
    
  }
  
  
  
  
  return 0;
}
