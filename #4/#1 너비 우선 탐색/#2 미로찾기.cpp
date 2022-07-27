#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

const int MAX = 1001;

int n,m;

int map[MAX][MAX];
bool visited[MAX][MAX];

int dx[4] = {1,0,-1,0}; 
int dy[4] = {0,1,0,-1}; 

// 어떤 좌표 x,y가 지도 안에 포함되는지 확인
bool in_range(int a,int b){
	return a >= 0 && a < n && b>=0 && b < m;
} 


int main() {
	queue<int>x_q,y_q;
	int x,y;
	int size;
	int d;
	int nx,ny;
	
	cin >> n >> m;
  	for(int i=0;i<n;i++){
  		
    	for(int j=0;j<m;j++){
      		cin >> map[i][j];
    	}
  	}
  	
  	// 초기 값을 큐에 push하고 방문 표시  
	x_q.push(n-1);
	y_q.push(0);
	visited[n-1][0] = true;
	d = 0; 
  	
  	// 큐가 빌때 까지 bfs, 큐의 size를 정의하여 거리를 표시  
	while(!x_q.empty()){
		size = x_q.size();
		while(size -- ){
			x = x_q.front();
			y = y_q.front();
			x_q.pop();
			y_q.pop();
			
			// 만약 (0,m-1) 까지 도달했다면 거리 출력 후 프로그램 종료 
			if( x == 0 && y == m -1){
				cout << d;
				return 0;
			}
			
			// 현재 노드의 사방을 탐색 
			for(int i=0;i<4;i++){
				nx = dx[i] + x;
				ny = dy[i] + y;
				
				// ny,ny 좌표가 지도 안에 있는 좌표이고 방문하지 않았고 지도 값이 0일때  
				if( in_range(nx,ny) && !visited[nx][ny] && map[nx][ny] == 0) {
					x_q.push(nx);
					y_q.push(ny);
					visited[nx][ny] = true;
				}
			}
		}
		d++;
	} 
  	
  	return 0;
}
