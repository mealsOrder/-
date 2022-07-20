#include <stdio.h>

const int MAX = 1005;

int main() {

  // 위에 누가 있는지 저장해야함
  // parent[x] : 정점 x의 부모노드를 저장 
  int parent[MAX] = {0,};
  int n;
  int x,y;
  
  // color[x]가 true 라면 x가 색칠되어있다는 뜻
  bool color[MAX] = {0,};
  
  
  scanf("%d %d %d",&n,&x,&y);
  
  for(int i=0;i<n-1;i++){
    int a,b;
    
    scanf("%d %d",&a,&b);
    
    // b의 위에 a가 있다.
    
    parent[b] = a;
    
  }
  
  // (1) x의 모든 조상을 구한다. 색칠한다.
  // (2) Y의 모든 조상을 색칠한다.
  // 만약 이미 조상체크가 되어있다면, 
  // 그 조상을 출력하고프로그램 종료
  
  while(1){
    
    color[x] = true;
    
    // x가 루트노드라면 종료
    if(x == 0){
      break;
    }
    x = parent[x];
    
    
  }
  
  // 만약 그 노드가 색칠되어있다면
  // 그 숫자가 공통조상 이라고 판단
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
