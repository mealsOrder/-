#include <stdio.h>
#include <cstdio>
#include <algorithm>

using namespace std;

const int NMAX =1000005;


int main() {
  long long n,m,max= -1;
  long long start, end, mid, sum;
  int a[NMAX];
  
  scanf("%lld %lld",&n,&m);
  
  for(int i=0;i<n;i++){
    scanf("%lld",&a[i]);
  }
  
  sort(a,a+n);
  
  start = 0;
  end = a[n-1];
  
  while(start <= end){
    sum = 0;
    mid = (start + end) / 2;
    
    for(int i=0;i<n;i++){
      if(a[i] > mid) sum+=a[i] - mid;
    }
  
    if(sum>=m){
      start = mid+1;
      if(mid > max) max = mid;
    }
    else{
      end = mid - 1;
    }
    
  }
  
  printf("%lld\n",max);
  
  return 0;
}
