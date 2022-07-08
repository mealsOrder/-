#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int a[8][8];
  int rookY[2],rookX[2],kx,ky,rCnt = 0;
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      scanf("%d",&a[i][j]);
      
      if(a[i][j] == 1){ // king
      	ky=i;
      	kx=j;
	  }
	  else if(a[i][j] == 2){ // rock
	  	rookY[rCnt] = i;
	  	rookX[rCnt] = j;
	  	
	  	rCnt++;
	  }
      
    }
  }
  
  bool flag = false;
  
  
  for(int k=0;k<2;k++){
  	
  	int ry = rookY[k], rx = rookX[k];
  	
  	for(int i=rx+1;i<8;i++){
	  	if (a[ry][i] == 1) flag = true;
	  	else if (a[ry][i] == 3) break;
	  }
	for(int i=ry-1;i>=0;i--){
	  	if (a[i][rx] == 1) flag = true;
	  	else if (a[i][rx] == 3) break;
	}
	for(int i=rx-1;i>=0;i--){
	  	if (a[ry][i] == 1) flag = true;
	  	else if (a[ry][i] == 3) break;
	}
	for(int i=ry+1;i<8;i++){
	  	if (a[i][rx] == 1) flag = true;
	  	else if (a[i][rx] == 3) break;
  	}
  }
  
  if(flag == true) printf("1\n");
  else printf("0\n");
  
  
  return 0;
}
