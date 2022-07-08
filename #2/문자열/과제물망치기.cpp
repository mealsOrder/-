#include <stdio.h>
#include <string.h>

int main(){
	
	char arr[100000];
	fgets(arr,100000,stdin);
	
	int su = strlen(arr);
	
	for(int i=0;i<su;i++){
		if(arr[i] != 32){
			printf("%c",arr[i]);
		}
	}
	
	return 0;
	
} 
