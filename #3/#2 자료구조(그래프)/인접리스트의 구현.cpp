#include <cstdio>
#include <vector>

const int MAX = 100;

using namespace std;


// ��������Ʈ�� ����

// 1 : 2 3 4
// 2 : 1 4
// 3 : 1 5
// 4 : 1 2 5
// 5 : 3 4

int main() {
  
  // vector <int> �� MAX �� ����
  vector <int> myGraph[MAX];
  // myGraph[0] --> vector
  // myGraph[1] --> vector
  // ...
  // myGraph[98] --> vector
  // myGraph[99] --> vector
  
  // myGraph[X] --> X�� �������ִ� ��� ���
  
  int n,m;
  
  scanf("%d %d",&n,&m);
  
  
  for(int i=0;i<m;i++){
    int a,b;
    
    scanf("%d %d",&a,&b);
    
    myGraph[a].push_back(b);
    myGraph[b].push_back(a);
    
    
  }
  
  
  for(int i=1;i<=n;i++){
    printf("%d(%d) : ",i,myGraph[i].size());
    
    for(int j=0;j<myGraph[i].size();j++){
      printf("%d ",myGraph[i][j]);
    }
    printf("\n");
  }
  
  
  return 0;
}
