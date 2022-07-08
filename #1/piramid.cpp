#include <stdio.h>
// (1) 공백 출력
// (2) 숫자들을 출력

int main() {

  int n,s;
  
  scanf("%d %d",&n,&s);
  
  int space = n-1, num = 1;
  int preFirst, preLast;
  
  for(int i=1;i<=n;i++){
  	
    for(int j=0;j<space;j++){
      printf(" ");
    }
    space--;
    
    if(i%2==0){ // 짝수줄, 증가하면서 출력
      int curFirst = preFirst + 1;
      if(curFirst >= 10) curFirst = 1;
      
      for(int j=0;j<num;j++){  
        printf("%d",curFirst);
        preLast = curFirst;
        curFirst+=1;
        if(curFirst>=10){
          curFirst = 1;
        }
      }
      
    }
    else{ // 홀수줄, 감소하면서 출력
      int curFirst;
      
      if(i==1) curFirst = s;
      
      else{
        curFirst= preLast;
      
        for(int j=0;j<num;j++){
          curFirst +=1;
          if(curFirst>=10){
            curFirst = 1;
          }
        }
      }
      
      
      preFirst=curFirst;
      
      for(int j=0;j<num;j++){
        printf("%d",curFirst);
        curFirst -=1;
        if(curFirst<=0) curFirst = 9;
      }
      
    }
    num+=2;
    printf("\n");
  }
  
  return 0;
  
}
