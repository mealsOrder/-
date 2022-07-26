// ���ͽ�Ʈ�� �˰���
// �� ������ ��� ������ ���� �ִܰŸ��� ���ϴ� �˰��� 

// T[i] : ���� i�� �����ϴµ� �ɸ��� �ִܰŸ�
// for i = 0 ~ n
//   (1) T[i] �� �ּڰ��� ���Ѵ�. ��, ���ݱ��� �ּڰ����� ������ �ʾҴ� ������
//   (2) index�κ��� �������. T[index] + cost

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX = 100;

vector <int> graph[MAX];
vector <int> cost[MAX];

int n,m,start,end2;

int table[MAX];
// check[i] = true : �̹� i�� �ִܰŸ��� Ȯ���Ǿ���.
// check[i] = false : ���� i�� �ִܰŸ��� Ȯ������ �ʾ���.

bool check[MAX];

int main() {

  cin >> n >> m >> start >> end2;
  
  for(int i=0;i<m;i++){
    
    int a,b,c;
    cin >> a >> b >> c;
    
    graph[a].push_back(b);
    graph[b].push_back(a);
    
    cost[a].push_back(c);
    cost[b].push_back(c);
    
    
  }
  
  for(int i=0;i<n;i++){
    
    table[i] = 999999999;
    
  }
  
  table[start] = 0;
  
  for(int i=0;i<n;i++){
    
    // (1) �ּڰ��� ���Ѵ�. ��, ���ݱ��� �ִܰŸ��� Ȯ������ �ʾҴ� ������ ����
    // (2) �� �ּڰ��� ���� ���κ��� �������
    
    int minValue = 999999999, minIndex = -1;
    
    
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
      
      
      // minIndex ---- (cost2) ----- Node2
      
      if(table[Node2] > table[minIndex] + cost2){
        table[Node2] = table[minIndex] + cost2;
      }
      
    }
    
  }
  
  
  cout << table[end2] << endl;
  
  
  // for(int i=0;i<n;i++){
  //   cout << table[i] << " ";
  // }
  
  return 0;
}
