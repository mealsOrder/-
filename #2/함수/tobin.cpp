#include <stdio.h>


int n,k;
int result[30];

void tobin(int x, int y){
	// ǥ���ؾ��� 1�� ���ٸ�
	if(y==0){
		for(int i=0;i<n;i++){
			printf("%d",result[i]);
		}
		printf("\n");
	} 
	else{
		for(int j=x;j<n;j++){
			
			// ���� 1�� ǥ���Ҽ� �ִ� ��ȸ�� �����ִٸ� j��° ��ġ�� 1�� ǥ�� 
			result[j] = 1;
			// j��ġ�� ǥ���ϰ� j+1�� 1�� ����Ҽ� �ִ��� �˻� 
			tobin(j+1,y-1);
			// j��ġ���� 1�� ǥ���� �� �ִ��� ��� �˻��Ͽ����� j��ġ�� ���� 0 
			result[j]=0;
		}
	}
}

int main() {
	
	scanf("%d %d",&n,&k);
	tobin(0,k);
  
  	return 0;
}
