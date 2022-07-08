#include <stdio.h>

int main() {

  int n,m;
  int flag = 0;
  int cnt = 0;
  scanf("%d %d",&n,&m);
  
  for(int i=n;i<=m;i++){
    for(int j=2;j<m;j++){
      if(i == 1){
        continue;
      }
      if(i%j==0){
        cnt++;
      }
      
    }
    
    if(cnt==1){
      printf("%d ",i);
    }
    cnt = 0;
  }
  
  return 0;
}
