#include <stdio.h>


int binarySearch(int arr[],int myStart, int myEnd, int value){
  // arr�� start���� end���� �߿���
  // value�� ã�� �� ��ġ�� ��ȯ�ϴ� �Լ�
  // ���� ���ٸ� -1��ȯ
  
  int start, end;
  int mid;
  
  // start : value���� �׻� ���� ���� ����Ŵ
  // end : value���� �׻� ū ���� ����Ŵ
  
  if(arr[myStart] > value) return -1;
  else if(arr[myStart] == value) return myStart;
  
  if(arr[myEnd] < value) return -1;
  else if(arr[myEnd] == value) return myEnd;
  
  start = myStart;
  end = myEnd;
  
  
  // start�� end�� �پ����������� �ݺ�
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
    printf("���� ã�� �� �����ϴ�\n");
  }
  else{
    printf("%d��°�� �ֽ��ϴ�\n",idx);
  }
  
  return 0;
}
