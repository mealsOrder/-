#include <stdio.h>

const int MAX = 100005;
int n,s;
int data[MAX];

bool check(int interval){
  // 구간의 길이 interval 만큼 정했을 때, 그 합이 s이상인 경우가 있는가?
  // 있으면 true, 없으면 FALSE
  
  int sum = 0;
  
  for(int i=0;i<interval;i++) sum += data[i];
  
  if(sum >= s) return true;
  
  for(int i=0;i<n-interval;i++){
    sum = sum - data[i] + data[i+interval];
    
    if(sum >= s) return true;
  }
  
  return false;
  
}

int main() {

  scanf("%d %d",&n,&s);
  
  for(int i=0;i<n;i++){
    scanf("%d",&data[i]);
  }
  
  
  // start는 무조건 x를 가리킴
  int start = 1;
  
  // end는 무조건 O를 가리킴
  int end = n;
  
  if(check(1)){
    printf("1\n");
    return 0;
  }
  
  if(!check(n)){
    printf("-1\n");
    return 0;
  }
  
  while(start+1 < end){
    int mid = (start+end) / 2;
    
    if(check(mid)) end = mid;
    else start = mid;
    
  }
  
  
  printf("%d\n",end);
  
  return 0;
}
