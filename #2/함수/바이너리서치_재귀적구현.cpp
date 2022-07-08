#include <stdio.h>

int binarySearch(int arr[],int start, int end, int value){
  // arr�� start ���� end ���� ���� �߿���
  // value�� �����Ѵٸ� �� ��ġ�� ��ȯ�ϰ�,
  // �׷��� ������ -1�� ��ȯ�ϴ� �Լ�
  
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
    printf("���� �����ϴ�.\n");
  }
  else{
    printf("%d��°�� ���ڰ� �ֽ��ϴ�.\n",idx);
  }
  
  return 0;
}
