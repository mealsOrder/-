#include <stdio.h>

const int MAX = 1005;

int main() {

  // ���� ���� �ִ��� �����ؾ���
  // parent[x] : ���� x�� �θ��带 ���� 
  int parent[MAX] = {0,};
  int n;
  int x,y;
  
  // color[x]�� true ��� x�� ��ĥ�Ǿ��ִٴ� ��
  bool color[MAX] = {0,};
  
  
  scanf("%d %d %d",&n,&x,&y);
  
  for(int i=0;i<n-1;i++){
    int a,b;
    
    scanf("%d %d",&a,&b);
    
    // b�� ���� a�� �ִ�.
    
    parent[b] = a;
    
  }
  
  // (1) x�� ��� ������ ���Ѵ�. ��ĥ�Ѵ�.
  // (2) Y�� ��� ������ ��ĥ�Ѵ�.
  // ���� �̹� ����üũ�� �Ǿ��ִٸ�, 
  // �� ������ ����ϰ����α׷� ����
  
  while(1){
    
    color[x] = true;
    
    // x�� ��Ʈ����� ����
    if(x == 0){
      break;
    }
    x = parent[x];
    
    
  }
  
  // ���� �� ��尡 ��ĥ�Ǿ��ִٸ�
  // �� ���ڰ� �������� �̶�� �Ǵ�
  while(1){
    if(color[y] == true){
      printf("%d\n",y);
      return 0;
    }
    
    color[y] = true;
    y = parent[y];
    
  }
  
  
  return 0;
}
