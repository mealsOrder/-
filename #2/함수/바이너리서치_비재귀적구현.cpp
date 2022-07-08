#include <stdio.h>


int binarySearch(int arr[],int myStart, int myEnd, int value){
  // arr의 start부터 end까지 중에서
  // value를 찾아 그 위치를 반환하는 함수
  // 만약 없다면 -1반환
  
  int start, end;
  int mid;
  
  // start : value보다 항상 작은 값을 가리킴
  // end : value보다 항상 큰 값을 가리킴
  
  if(arr[myStart] > value) return -1;
  else if(arr[myStart] == value) return myStart;
  
  if(arr[myEnd] < value) return -1;
  else if(arr[myEnd] == value) return myEnd;
  
  start = myStart;
  end = myEnd;
  
  
  // start와 end가 붙어있을때까지 반복
  while(start+1 < end){
    mid = (start + end) / 2;
    
    if(arr[mid]== value) return mid;
    else if(arr[mid]>value) end = mid;
    else start = mid;
    
  }
  
  // start >> end
  return -1;
  
}

int main() {

  int n,m;
  int arr[100];
  
  scanf("%d",&n);
  
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  
  scanf("%d",&m);
  
  
  int idx = binarySearch(arr,0,n-1,m);
  
  if(idx == -1){
    printf("수를 찾을 수 없습니다\n");
  }
  else{
    printf("%d번째에 있습니다\n",idx);
  }
  
  return 0;
}
