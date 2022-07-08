#include <stdio.h>


int n,k;
int result[30];

void tobin(int x, int y){
	// 표시해야할 1이 없다면
	if(y==0){
		for(int i=0;i<n;i++){
			printf("%d",result[i]);
		}
		printf("\n");
	} 
	else{
		for(int j=x;j<n;j++){
			
			// 아직 1을 표시할수 있는 기회가 남아있다면 j번째 위치에 1을 표시 
			result[j] = 1;
			// j위치에 표시하고 j+1에 1을 출력할수 있는지 검사 
			tobin(j+1,y-1);
			// j위치에서 1을 표시할 수 있는지 모두 검사하였으면 j위치의 값은 0 
			result[j]=0;
		}
	}
}

int main() {
	
	scanf("%d %d",&n,&k);
	tobin(0,k);
  
  	return 0;
}
