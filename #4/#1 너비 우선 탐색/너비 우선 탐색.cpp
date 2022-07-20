
// �־��� �׷��� 
// 1  �� 2  ��  6
// |    /  \    |
// |   /    4 ��5
//  \ /    /  \
//   3 �� 7 �� 8 �� 9 


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


// (DFS) ���� �켱 Ž�� (����)

// 1 --> 2 --> 3 --> 7 --> 4 --> 5 --> 6 --> 8 --> 9


// (BFS) �ʺ� �켱 Ž�� (ť)

// 1 --> 2 --> 3 --> 4 --> 6 --> 7 --> 5 --> 8 --> 9


#include <cstdio>
#include <vector>
#include <queue>

//Queue.push(x);
//Queue.pop();
//Queue.front();
//Queue.empty() // ������� TRUE
�� 
using namespace std;

const int MAX = 100;

int n,m;
vector <int> myGraph[MAX];

  // (1) �������� ť�� �����Ѵ�.
  // (2) �������� ��ĥ�Ѵ�.
  
  // BFS ����!
  
  // (3) ť���� �ϳ��� ����. �갡 �츮�� ���� ��ġ
  // (4) ������ ��� �������� �湮�ߴ��� �����
  //     �湮���� �ʾҴٸ�, ��ĥ�ϰ� ť�� �����Ѵ�.
  // (5) ��� �Ϸ��ߴٸ� �ٽ� 3���� ���ư���.

void BFS(){

  
  bool check[MAX] = {0,}; // true �� ��ĥ�� ��.
  queue <int> Queue;
  
  
  Queue.push(1);
  check[1] = true;
  
  // ť�� ������� ������ �Ʒ��� �ݺ� 
  while(!Queue.empty()){
    
    int current = Queue.front();
    Queue.pop();
    
    printf("%d ",current);
    
    for(int i=0;i<myGraph[current].size();i++){
      int next = myGraph[current][i];
      
      if(check[next] == false){
        check[next] = true;
        Queue.push(next);
      }
      
      
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
  
  BFS();
  
  return 0;
}
