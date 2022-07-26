// 다익스트라 알고리즘
// 한 점에서 모든 점까지 가는 최단거리를 구하는 알고리즘 

// T[i] : 정점 i에 도달하는데 걸리는 최단거리
// for i = 0 ~ n
//   (1) T[i] 중 최솟값을 정한다. 단, 지금까지 최솟값으로 뽑히지 않았던 값들중
//   (2) index로부터 뻗어나간다. T[index] + cost

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX = 1000000;

vector <int> graph[MAX];
vector <int> cost[MAX];

int n,m,s,e;

int table[MAX];
// check[i] = true : 이미 i는 최단거리가 확정되었다.
// check[i] = false : 아직 i는 최단거리가 확정되지 않었다.

bool check[MAX];

int main() {

  cin >> n >> m;
  
  for(int i=0;i<m;i++){
    
    int a,b;
    cin >> a >> b ;
    
    graph[a].push_back(b);
    graph[b].push_back(a);
    
    cost[a].push_back(1);
    cost[b].push_back(1);
    
    
  }
  
  cin >> s >> e;
  
  for(int i=0;i<n;i++){
    
    table[i] = 9999999;
    
  }
  
  table[s] = 0;
  
  for(int i=0;i<n;i++){
    
    // (1) 최솟값을 구한다. 단, 지금까지 최단거리로 확정되지 않았던 정점에 대해
    // (2) 그 최솟값을 갖는 노드로부터 뻗어나간다
    
    int minValue = 99999999, minIndex = -1;
    
    
    for(int j=0;j<n;j++){
      if(!check[j] && minValue > table[j]){
        minValue = table[j];
        minIndex = j;
      }
    }
    
    check[minIndex] = true;
    
    for(int j=0;j<graph[minIndex].size();j++){
      int Node2 = graph[minIndex][j];
      int cost2 = cost[minIndex][j];
      
      
      if(table[Node2] > table[minIndex] + cost2){
        table[Node2] = table[minIndex] + cost2;
      }
      
    }
    
  }
  
  
  cout << table[e] << endl;
  
  //최단거리 전부 뽑는 결과 
  // for(int i=0;i<n;i++){
  //   cout << i<< " : " <<table[i] << " ";
  // }
  
  return 0;
}
