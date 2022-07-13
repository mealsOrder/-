// ���� �켱 Ž���� ����

// 1  �� 2  ��  6
// |    /  \    |
// |   /    4 ��5
//  \ /    /  \
//   3 �� 7 �� 8 �� 9 

// 1 --> 2 --> 3 --> 7 --> 4 --> 5 --> 6 --> 8 --> 9

// �Է�
// 9 12
// 1 2 
// 1 3
// 2 3
// 2 4
// 2 6 
// 3 7
// 4 5 
// 4 7
// 4 8
// 5 6 
// 7 8
// 8 9

#include <cstdio>
#include <vector>

using namespace std;

const int MAX = 100;

int n,m;

vector <int> myGraph[MAX]; // myGraph[x] = x�� ���� ����Ʈ

bool visited[MAX];

void DFS(int x){
  // x���� �����ؼ� DFS�Ͽ� �� ������ ����ϴ� �Լ�.
  // ��, visited�� �湮 ����� ����.
  
  visited[x] = true;
  printf("%d ",x);
  
  // myGraph[x] <- [1, 3, 4]
  for(int i=0;i<myGraph[x].size();i++){
    
    // x�� y�� ������ �Ǿ� �ִ�.
    int y = myGraph[x][i];
      
      // �� ��带 �湮�ߴ��� üũ
      if(visited[y] == false){
        DFS(y);
      }
    
  }
  
}

int main() {
  
  
  scanf("%d %d",&n,&m);
  
  for(int i=0;i<m;i++){
    
    int a,b;
    
    scanf("%d %d",&a,&b);
    
    myGraph[a].push_back(b);
    myGraph[b].push_back(a);
  }
  
  DFS(1); // 1 ���� ���̿켱 Ž���ؼ� �湮�� ������� ����ض�
  
  return 0;
}
