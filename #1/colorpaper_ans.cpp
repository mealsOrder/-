#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  
  int n;
  int ax,ay,bx,by;
  
  int a[101][101] = {0,};
  int result[101];
  
  scanf("%d",&n);
  
  for(int i=0;i<n;i++){
  	scanf("%d %d %d %d",&ax,&ay,&bx,&by);
  	
  	for(int x=ax;x<ax+bx;x++){
  		for(int y=ay;y<ay+by;y++){
  			a[x][y]=i+1;
		  }
	  }
  	
  }
  
  for(int i=0;i<101;i++){
  	for(int j=0;j<101;j++){
  		result[ a[i][j] ]++;
		  
	  }
  }
  
  for(int i=1;i<=n;i++){
  	printf("%d\n",result[i]);
  }
  
  return 0;
}
