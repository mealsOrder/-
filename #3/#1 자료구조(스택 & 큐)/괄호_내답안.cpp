#include <stdio.h>
#include <string.h>

int myStack[51],myTop = 0;

int main(){
	char a[51];
	scanf("%s",a);
	int len = strlen(a);
	
	for(int i=0;i<len;i++){
	  if(a[i] == '('){
	    myStack[myTop++] = i;
	  }
	  else{
	    if(myTop == 0){
	      printf("NO\n");
	      return 0;
	    }
	    myStack[--myTop] = 0;
	  }
	}
	
	if(myTop > 0) printf("NO\n");
	else printf("YES\n");
		
	
	
	return 0;
}
