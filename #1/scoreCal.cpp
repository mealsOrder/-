#include <stdio.h>

int main() {
  
  int n,score=0,sum=0;
  int a[100];
  scanf("%d",&n);
  
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  
  int preState,curNum;
  int num = 1;
  
  if(a[0]==1){
    score +=1;
    preState = a[0];
  }
  else{
    score += 0;
    preState = a[0];
  }
  
  for(int i=1;i<n;i++){
    
    if(a[i]==1 && preState == 1){
      num+=1;
      score+= num;
    }else if (a[i]==1 && preState == 0){
      num = 1;
      score += num;
    }
    else if(a[i]==0 && preState == 1){
      num = 0;
      score += num;
    }
    
    else{
      score+=0;
    }
    
    preState = a[i];
  }
  
  printf("%d\n",score);
  return 0;
}
