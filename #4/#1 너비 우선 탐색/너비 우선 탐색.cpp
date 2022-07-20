
// 주어진 그래프 
// 1  ㅡ 2  ㅡ  6
// |    /  \    |
// |   /    4 ㅡ5
//  \ /    /  \
//   3 ㅡ 7 ㅡ 8 ㅡ 9 


// 입력
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


// (DFS) 깊이 우선 탐색 (스택)

// 1 --> 2 --> 3 --> 7 --> 4 --> 5 --> 6 --> 8 --> 9


// (BFS) 너비 우선 탐색 (큐)

// 1 --> 2 --> 3 --> 4 --> 6 --> 7 --> 5 --> 8 --> 9


#include <cstdio>
#include <vector>
#include <queue>

//Queue.push(x);
//Queue.pop();
//Queue.front();
//Queue.empty() // 비었으면 TRUE
ㅂ 
using namespace std;

const int MAX = 100;

int n,m;
vector <int> myGraph[MAX];

  // (1) 시작점을 큐에 삽입한다.
  // (2) 시작점을 색칠한다.
  
  // BFS 시작!
  
  // (3) 큐에서 하나를 뺀다. 얘가 우리의 현재 위치
  // (4) 인접한 모든 정점에게 방문했는지 물어보고
  //     방문하지 않았다면, 색칠하고 큐에 삽입한다.
  // (5) 모두 완료했다면 다시 3으로 돌아간다.

void BFS(){

  
  bool check[MAX] = {0,}; // true 면 색칠이 됨.
  queue <int> Queue;
  
  
  Queue.push(1);
  check[1] = true;
  
  // 큐가 비어있지 않으면 아래를 반복 
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
