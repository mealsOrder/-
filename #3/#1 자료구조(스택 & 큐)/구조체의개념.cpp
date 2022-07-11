#include <stdio.h>

// 구조체의 개념
 

struct Point {
  int x;
  int y;
  
  int getSum(){
    return x+y;
  }
};

int main() {
  
  int a,b;
  
  Point p;
  p.x = 10;
  p.y = 11;

  printf("%d\n",p.getSum());

  return 0;
}
