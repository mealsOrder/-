#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  
  int n,x,y,r,k;
  int a[106][106];
  int num=0;
  scanf("%d",&n);
  scanf("%d %d %d",&x,&y,&r);
  
  
  for(int i=1;i<=n;i++){
    
    for(int j=1;j<=n;j++){
      a[x-r][y] = r;
      a[x+r][y] = r;
      a[x][y-r] = r;
      a[x][y+r] = r;
      
      if(a[i][j] != 0){
        a[i-1][j-1]= a[i][j]-1;
      }
      
      r--;
      
      if(r<0){
        r=r*-1;
      }
      if(a[i][j]==4|| a[i][j]<0 ){
        continue;
      }
      
      if(i==x && j==y){
        printf("x ");
      }
      else{
        printf("%d ",a[i][j]);
      }
      
      
    }
    printf("\n");
  }
  return 0;
}
