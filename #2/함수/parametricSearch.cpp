#include <stdio.h>

const int MAX = 100005;
int n,s;
int data[MAX];

bool check(int interval){
  // ������ ���� interval ��ŭ ������ ��, �� ���� s�̻��� ��찡 �ִ°�?
  // ������ true, ������ FALSE
  
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
  
  
  // start�� ������ x�� ����Ŵ
  int start = 1;
  
  // end�� ������ O�� ����Ŵ
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
