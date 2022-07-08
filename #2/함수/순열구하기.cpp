#include <stdio.h>

int n,r;
int result[20];
void getResult(int x){
  
  if(x>=r){
    bool flag = false;
    for(int i=0;i<r;i++){
      for(int j=0;j<r;j++){
        if(i != j && result[i] == result[j]){
          flag = true;
        }
      }
    }
    
    if(flag == false){
      for(int i=0;i<r;i++) printf("%c",result[i]+'a');
      printf("\n");
    }
    
  }
  else{
    for(int i=0;i<n;i++){
      result[x]=i;
      getResult(x+1);
    }
  }
  
  
}

int main() {

  //Please Enter Your Code Here
  
  scanf("%d %d",&n,&r);
  
  getResult(0);
  
  return 0;
}
