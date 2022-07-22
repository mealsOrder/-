#include <cstdio>
#include <vector>
#include <algorithm>

#define RED 1
#define BLUE 2

using namespace std;

const int MAX = 100001;

int n,m,cnt=0;
int visited[MAX]={0,};
bool check[MAX] = {1,};
vector <int> myComputer[MAX];
void DFS(int cur){
	
	// 방문 하지 않은 정점이면 빨간색으로 칠 
	if(!visited[cur]){
		visited[cur] = RED;
	}
	
	for(int i=0;i<myComputer[cur].size();i++){
		int next = myComputer[cur][i];
		
		// 아직 방문하지 않은 정점이라면 현재 정점과 반대되는 색
		if(!visited[next]){
			if(visited[cur] == RED ){
				visited[next] = BLUE;
			}
			else if(visited[cur] == BLUE){
				visited[next] = RED;
			}
			DFS(next);
		} 
	} 
	
} 


// 이분 그래프 인지 확인하는 함수
bool isBigrahp(){
	for(int cur = 1;cur<=n;cur++){
		for(int i=0;i<myComputer[cur].size();i++){
			int next = myComputer[cur][i];
			// 만일 인접한 정점과 색이 같다면 이분 그래프가 아님
			if(visited[cur] == visited[next]){
				return false;
			} 
		}
	}
	return true;
} 

int main() {
  
  scanf("%d %d",&n,&m);
  
  for(int j=0;j<m;j++){
    int a,b;
    
    scanf("%d %d",&a,&b);
    
    myComputer[a].push_back(b);
    myComputer[b].push_back(a);
    
  }
  
  for(int i=1;i<=n;i++){
  	if(!visited[i]){
  		DFS(i);
	  }
  }
  if(!isBigrahp()){
		printf("No\n");
		return 0;
   }
	else{
		printf("Yes\n");
	}
  
  return 0;
}
