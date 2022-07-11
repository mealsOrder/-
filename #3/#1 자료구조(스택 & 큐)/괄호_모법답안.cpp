#include <stdio.h>
#include <string.h>

int main(){
	
	int myStack[55], myTop=0;
	char paren[55];
	int len;
	
	scanf("%s",paren);
	len = strlen(paren);
	
	for(int i=0;i<len;i++){
		if(paren[i] == '('){
			myStack[myTop] = i;
			myTop++;
		}
		else{
			if(myTop == 0){
				printf("NO\n");
				return 0;
			}
			myStack[myTop-1] = 0;
			myTop --;
		}
	}
	
	if(myTop > 0) printf("NO\n");
	else printf("YES\n");
	
	return 0;
}
