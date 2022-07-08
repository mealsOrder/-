#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int n,div,mod[10];
  int ans = 0;
  int cnt = 0;
  scanf("%d",&n);
  div = n;
  while(div != 0){
    mod[cnt] = div % 2;
    div = div/2;
    
    //printf("%d",mod[cnt]);
    cnt++;
  }
  
  for(int i=cnt-1;i>=0;i--){
    printf("%d",mod[i]);
  }
  
  return 0;
}
