#include <stdio.h>

// Point ��� Ÿ���� ������ ���̴�.
// ĸ��ȭ�� �����ϴ� ������ struct�� ����Ѵ�!

struct Point {
  int x;
  int y;
  
  int getSum(){
    int cnt = 0;
    
    for(int i=0;i<x+y;i++){
      cnt++;
    }
    
    return cnt;
  }
  
};

int main() {
  Point p1,p2;
  
  p1.x=1;
  p1.y =2;
  
  p2.x = 3;
  p2.y = 4;
  
  printf("%d\n",p1.getSum());
  printf("%d\n",p2.getSum());
  

  return 0;
}
