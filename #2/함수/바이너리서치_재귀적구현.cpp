#include <stdio.h>

int binarySearch(int arr[],int start, int end, int value){
  // arr의 start 부터 end 까지 값들 중에서
  // value가 존재한다면 그 위치를 반환하고,
  // 그렇지 않으면 -1을 반환하는 함수
  
  if(start>end){
    return -1;
  }
  else if(start == end){
    if(arr[start] == value ) return start;
    else return -1;
  }
  else{
    int mid = (start+end)/2;
    if(arr[mid] == value) return mid;
    else if(arr[mid]>value) return binarySearch(arr,start,mid-1,value);
    else return binarySearch(arr,mid+1,end,value);
  }
  
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
    printf("수가 없습니다.\n");
  }
  else{
    printf("%d번째에 숫자가 있습니다.\n",idx);
  }
  
  return 0;
}
