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

// � ��ǥ x,y�� ���� �ȿ� ���ԵǴ��� Ȯ��
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
  	
  	// �ʱ� ���� ť�� push�ϰ� �湮 ǥ��  
	x_q.push(n-1);
	y_q.push(0);
	visited[n-1][0] = true;
	d = 0; 
  	
  	// ť�� ���� ���� bfs, ť�� size�� �����Ͽ� �Ÿ��� ǥ��  
	while(!x_q.empty()){
		size = x_q.size();
		while(size -- ){
			x = x_q.front();
			y = y_q.front();
			x_q.pop();
			y_q.pop();
			
			// ���� (0,m-1) ���� �����ߴٸ� �Ÿ� ��� �� ���α׷� ���� 
			if( x == 0 && y == m -1){
				cout << d;
				return 0;
			}
			
			// ���� ����� ����� Ž�� 
			for(int i=0;i<4;i++){
				nx = dx[i] + x;
				ny = dy[i] + y;
				
				// ny,ny ��ǥ�� ���� �ȿ� �ִ� ��ǥ�̰� �湮���� �ʾҰ� ���� ���� 0�϶�  
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
