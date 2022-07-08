#include <stdio.h>

int n;
long long int k;

long long int getOrder(long long int x){
  // x�� ���°���� ��ȯ�ϴ� �Լ�.
  
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

  // p �� ���° �����ΰ�? --> O(N)
  
  
  scanf("%d %lld",&n,&k);
  
  // 1~ n*N
  // ���� p�� ���°�ΰ�?
  
  long long int start = 1, end = n*n+1;
  
  while(start + 1 < end){
    // start : �׻� ������ �Ǵ� ���ں��� �۰ų� ���� ����
    // end   : �׻� ������ �Ǵ� ���ں��� ū ����
    
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
