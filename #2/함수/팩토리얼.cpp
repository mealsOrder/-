#include <stdio.h>
int fact(int n){
	    if( n <=1){
	      return 1;
	    }
	    else{
	      return n*fact(n-1);
	    }
  }
int main() {

  //Please Enter Your Code Here
  int n;
  
  scanf("%d",&n);
  
  int ans = 0;
  
  ans = fact(n);
  
  printf("%d",ans); 
  
  return 0;
}
