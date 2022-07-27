#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

// �̷� Ż�⿡ Ȱ���� ���� ����  

const int MAX = 1001;

int n,m;
int map[MAX][MAX];

bool visited[MAX][MAX][2];
int dist[MAX][MAX][2];

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

// ������ ���ԵǴ� ��ǥ���� üũ�ϴ� �Լ�  
bool check(int a,int b){
  return a >=0 && a<n && b>=0 && b<m;
}


int main() {
  
  queue< pair <int,int> > q;
  queue<int> wall;
  int x,y,w;
  int nx,ny;
  
  // n, m �Է¹ޱ�
  cin >> n >> m;
  
  // map �� �Է¹ޱ� 
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> map[i][j];
    }
  }
  
  
  // �ʱ� ��ǥ�� �Ÿ� �� �ʱ�ȭ 
  for(int i=0;i<n;i++){
  	for(int j=0;j<m;j++){
  		dist[i][j][0] = 10000000;
  		dist[i][j][1] = 10000000;
	  }
  } 
  
  dist[n-1][0][0] = 0;
  q.push(make_pair(n-1,0));
  wall.push(0);
  
  // ť�� ���� ���� �ݺ�  
  while(!q.empty()){
    x = q.front().first;
    y = q.front().second;
    w = wall.front();
    q.pop();
    wall.pop();
    
    // ��ȭ�¿� ��ǥ�� ���� ������ �˻�  
    for(int i=0;i<4;i++){
    	
    	nx = dx[i] + x;
    	ny = dy[i] + y;
    	
    	// ������ ���ԵǴ� ��ǥ���� Ȯ�� 
    	if(!check(nx,ny)) continue;
    	
    	// ���� ��ǥ�� ���� �ƴҶ� �̷�ã��  
    	if(map[nx][ny] == 0){
    		
    		// �湮 ����� �ִٸ� ���  
    		if(visited[nx][ny][w]) continue;
			
			// �湮 ���� �ʾҴٸ� �湮 üũ  
			visited[nx][ny][w] = true ;
			dist[nx][ny][w] = dist[x][y][w] + 1;
			q.push(make_pair(nx,ny));
			wall.push(w); 
		}
		// ���� ��ǥ�� ���϶� �̷�ã�� 
		else{
			// w �� 1 �̰ų� nx,ny,1 �� �湮�ߴٸ� ���  
			if(w==1 || visited[nx][ny][1]) continue;
			
			// w �� 1�� �ƴϰ� nx,ny,1�� �湮���� �ʾҴٸ� �湮 üũ 
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
