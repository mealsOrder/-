#include <stdio.h>


// ��������� �̿��� �׷����� ����

const int MAX = 10;


// 5 6(������ ����, ������ ����)
// 5 6
// 1 2
// 1 3
// 1 4
// 2 4
// 4 5
// 3 5



// Q1. ���� X�� Y�� ������ �Ǿ� �ִ°�? YES/NO
// Q2. ���� X�� ������ �Ǿ� �ִ� ��� ������ ����϶�.


// ������ �迭�� ũ�⸦ �˰� ������ ũ�⸦ ����� ������ ������ �ȶ�
// �迭�� ��ó�� ĭ�� ����� ������ ���ư� ex arr[][MAX]
bool isConnected(int myGraph[MAX][MAX], int x, int y){
  // myGraph���� x�� y�� ������ �Ǿ� ������ true, �ƴϸ� false�� ��ȯ
  
  // if(myGraph[x][y] == 1) return true;
  // else return false;
  
  return myGraph[x][y] == 1 ? true : false;
    
}

void getAdj(int myGraph[MAX][MAX], int n, int x){
  // adjacent node ������ �ִ� ������ ��� �Լ� 
  
  for(int i=1;i<=n;i++){
    if(myGraph[x][i] == 1) printf("%d ",i);
  }
  printf("\n");
  
}


int main() {

  int n,m; // n : ������ ����, m : ������ ����
  
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
  
  
  // isConnected O(1) : ����
  
  printf("%d\n",isConnected(myGraph,1,2)); // 1
  printf("%d\n",isConnected(myGraph,1,5)); // 0
  printf("%d\n",isConnected(myGraph,3,5)); // 1
  
  // getAdj  O(N) : ����
  
  getAdj(myGraph,n,2); // 1 4
  getAdj(myGraph,n,4); // 1 2 5
  
  
  return 0;
}
