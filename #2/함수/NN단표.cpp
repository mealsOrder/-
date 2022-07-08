#include <stdio.h>

int n;
long long int k;

long long int getOrder(long long int x){
  // x가 몇번째인지 반환하는 함수.
  
  long long int result =0;
  
  for(int i=1;i<=n;i++){
    if((long long int)i*n < x) result += n;
    else{
      if( x % i == 0) result += (x/i)-1;
      else result += x/i;
    }
    
  }
  
  return result +1;
}

int main() {

  // p 가 몇번째 숫자인가? --> O(N)
  
  
  scanf("%d %lld",&n,&k);
  
  // 1~ n*N
  // 숫자 p가 몇번째인가?
  
  long long int start = 1, end = n*n+1;
  
  while(start + 1 < end){
    // start : 항상 정답이 되는 숫자보다 작거나 같은 숫자
    // end   : 항상 정답이 되는 숫자보다 큰 숫자
    
    long long int mid = (start + end) /2;
    long long int myOrder = getOrder(mid);
    
    
    if(myOrder <= k){
      start = mid;
    }
    else{
      end = mid;
    }
    
    
  }
  
  printf("%lld\n",start);
  return 0;
}
