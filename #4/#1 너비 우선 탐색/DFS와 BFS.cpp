#include <stdio.h>
#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>

const int MAX = 100001;

using namespace std;


int n,m;


vector <int> myGraph[MAX];
bool visited[MAX]={0,};

bool check[MAX] = {0,};
queue <int> Queue;


// ±íÀÌ ¿ì¼± Å½»ö 
void DFS(int x){
  
  visited[x] = true;
  
  printf("%d ",x);
 
 for(int i=0;i<myGraph[x].size();i++){
   
   int y = myGraph[x][i];
   
   if(visited[y] == false){
     DFS(y);
   }
   
 }
 
  
}


// ³Êºñ ¿ì¼± Å½»ö
void BFS(){
  
  
  check[0] = true;
  Queue.push(0);
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
  
  printf("\n");
}


int main() {

  
  scanf("%d %d",&n,&m);
  
  for(int i=0;i<m;i++){
    int a,b;
    scanf("%d %d",&a,&b);
    
    myGraph[a].push_back(b);
    myGraph[b].push_back(a);
    
    
  }
  
  
  for(int i=0;i<m;i++){
    sort(myGraph[i].begin(),myGraph[i].end());
  }
  
  DFS(0);
  printf("\n");
  BFS();
  
    
  return 0;
}
