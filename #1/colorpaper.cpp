#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  
  int n;
  int ax,ay,bx,by;
  
  int a[102][102];
  int result[101];
  
  scanf("%d",&n);
  
  for(int i=1;i<=n;i++){
  	scanf("%d %d %d %d",&ax,&ay,&bx,&by);
  	bx += ax;
  	by += ay;
  	
  	for(int x=ax;x<bx;x++){
  		for(int y=ay;y<by;y++){
  			a[x][y]=i;
		  }
	  }
  	
  }
  
  for(int i=1;i<101;i++){
  	for(int j=1;j<101;j++){
  		if(a[i][j]){
  			result[ a[i][j] ]++;
		  }
	  }
  }
  
  for(int i=1;i<=n;i++){
  	printf("%d\n",result[i]);
  }
  
  return 0;
}
