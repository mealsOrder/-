#include <stdio.h>

// 인접행렬을 이용한 그래프의 구현

// 5 6(정점의 갯수, 간선의 갯수)
// 
// 1 2
// 1 3
// 1 4
// 2 4
// 4 5
// 3 5

const int MAX = 10;

int main() {

  int n,m; // n : 정점의 갯수, m : 간선의 갯수
  
  int myGraph[MAX][MAX] = {0,};
  
  scanf("%d %d",&n,&m);
  
  for(int i=0;i<m;i++){
    int a, b;
    
    
    scanf("%d %d",&a,&b);
    
    myGraph[a][b] = 1;
    myGraph[b][a] = 1;
    
  }
  
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      printf("%d ",myGraph[i][j]);
    }
    printf("\n");
  }
  
  
  return 0;
}
