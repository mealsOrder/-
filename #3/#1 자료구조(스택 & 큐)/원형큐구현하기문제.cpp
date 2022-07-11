#include <stdio.h>

const int MAX = 101;

int main() {

  int n,m,f,r,numE;
  int queue[MAX];
  
  scanf("%d %d",&n,&m);
  
  
  // 1 push
  // 2 pop
  // 3 front
  for(int i=0;i<m;i++){
    
    int a;
    scanf("%d",&a);
    
    if(a==1){
      int b;
      scanf("%d",&b);
      
      if(numE >= n){
        printf("Overflow\n");
      }
      else{
        queue[r] = b;
        r=(r+1)%n;
        numE ++;
      }
      
      
    }
    else if( a== 2){
      
      if(numE <= 0){
        printf("Underflow\n");
      }
      else{
        queue[f] = 0;
        f=(f+1)%n;
        numE --;
      }
      
    }
    else{
      if(numE <= 0){
        printf("NULL\n");
      }
      else{
        printf("%d\n",queue[f]);
      }
    }
    
  }
  
  
  return 0;
}
