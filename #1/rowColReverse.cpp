#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int a[10][10]={0,};
  int n;
  int nxt[2] = {1, 0};
  
  scanf("%d",&n);
  
  for(int i=0;i<n;i++){
  	a[i][i] = nxt[ a[i][i] ];
  	 for(int j=0;j<10;j++){
  	 	
    	a[i][j] = nxt[ a[i][j] ];
    	a[j][i] = nxt[ a[j][i] ];
	}
  }
  
  
//  for(int i = 1; i <= n; i++){
//   arr[i][i] ������
//   for(int j = 1; j <= 10; j++){
//      arr[i][j] ������
//      arr[j][i] ������
//   }
//}
  
  
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  return 0;
}
