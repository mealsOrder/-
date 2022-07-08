#include <stdio.h>
#include <cstdio>
#include <algorithm>

using namespace std;

const int MAX = 100005;

int n,m;

int data[MAX];


int getStartPoint(int value){
  // start�� �׻� value���� ���� ���� ����Ų��
  // end�� �׻� value���� ũ�ų� ���� ���� ����Ų��.
  int start, end;
  
  if(data[0]<value) start = 0;
  else{
    if(data[0]>value) return -1;
    else return 0;
  }
  
  if(data[n-1] >= value ) end = n-1;
  else return -1;
  
  // start�� end�� �پ����� �ʴٸ�
  while(start+1 < end){
    int mid = (start+end) / 2;
    if(data[mid] < value) start = mid;
    else end= mid;
  }
  
  if(data[end] == value) return end;
  else return -1;
  
}

int getEndPoint(int value){
  // start�� value���� �׻� �۰ų� ���� ���� ����Ų��.
  // end�� value���� �׻� ū ���� ������Ų��
  int start, end;
  
  if(data[0] <=value) start = 0;
  else return -1;
  
  if(data[n-1] > value) end = n-1;
  else{
    if(data[n-1] < value) return -1;
    else return n-1;
  }
  
  
  while(start+1<end){
    int mid = (start+end) /2;
    if(data[mid] <= value) start = mid;
    else end = mid;
  }
  
  if(data[start] == value) return start;
  else return -1;
}


int main() {
  scanf("%d %d",&n,&m);
  
  for(int i=0;i<n;i++) scanf("%d",&data[i]);
  
  sort(data,data+n);
  
  for(int i=0;i<m;i++){
    int a;
    
    scanf("%d",&a);
    
    int front, rear;
    
    front = getStartPoint(a);
    rear = getEndPoint(a);
    
    
    if(front == -1) printf("0\n");
    else{
      printf("%d\n",rear - front + 1);
    }
  }
  
  
  
  
  return 0;
}
