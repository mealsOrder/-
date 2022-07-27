#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

// 미로 탈출에 활용할 변수 선언  

const int MAX = 1001;

int n,m;
int map[MAX][MAX];

bool visited[MAX][MAX][2];
int dist[MAX][MAX][2];

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

// 지도에 포함되는 좌표인지 체크하는 함수  
bool check(int a,int b){
  return a >=0 && a<n && b>=0 && b<m;
}


int main() {
  
  queue< pair <int,int> > q;
  queue<int> wall;
  int x,y,w;
  int nx,ny;
  
  // n, m 입력받기
  cin >> n >> m;
  
  // map 값 입력받기 
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> map[i][j];
    }
  }
  
  
  // 초기 좌표와 거리 값 초기화 
  for(int i=0;i<n;i++){
  	for(int j=0;j<m;j++){
  		dist[i][j][0] = 10000000;
  		dist[i][j][1] = 10000000;
	  }
  } 
  
  dist[n-1][0][0] = 0;
  q.push(make_pair(n-1,0));
  wall.push(0);
  
  // 큐가 빌때 까지 반복  
  while(!q.empty()){
    x = q.front().first;
    y = q.front().second;
    w = wall.front();
    q.pop();
    wall.pop();
    
    // 상화좌우 좌표를 범위 내에서 검사  
    for(int i=0;i<4;i++){
    	
    	nx = dx[i] + x;
    	ny = dy[i] + y;
    	
    	// 지도에 포함되는 좌표인지 확인 
    	if(!check(nx,ny)) continue;
    	
    	// 다음 좌표가 벽이 아닐때 미로찾기  
    	if(map[nx][ny] == 0){
    		
    		// 방문 기록이 있다면 계속  
    		if(visited[nx][ny][w]) continue;
			
			// 방문 하지 않았다면 방문 체크  
			visited[nx][ny][w] = true ;
			dist[nx][ny][w] = dist[x][y][w] + 1;
			q.push(make_pair(nx,ny));
			wall.push(w); 
		}
		// 다음 좌표가 벽일때 미로찾기 
		else{
			// w 가 1 이거나 nx,ny,1 을 방문했다면 계속  
			if(w==1 || visited[nx][ny][1]) continue;
			
			// w 가 1이 아니고 nx,ny,1을 방문하지 않았다면 방문 체크 
			visited[nx][ny][1] = true;
			dist[nx][ny][1] = dist[x][y][w] + 1;
			q.push(make_pair(nx,ny));
			wall.push(1);
		}
    	
	}
    
    
  }
  cout << min(dist[0][m-1][0], dist[0][m-1][1]);
  
  return 0;
}
