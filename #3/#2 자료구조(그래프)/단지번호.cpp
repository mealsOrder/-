#include <iostream>
#include <vector>
#include <algorithm>
#include <string> 

using namespace std;

const int MAX = 27;

int n;
int map[MAX][MAX] = {0,};	// 지도 
bool visited[MAX][MAX] = {0,};	// 방문체크 
int dy[] = {0,0,1,-1};			// y좌표 
int dx[] = {1,-1,0,0};			// x좌표 
int label = 1; 	// 단지 번호 
vector<int>v; 	// 집수 저장벡터 
int house; 		// 집수  

void DFS(int y, int x){
	
	visited[y][x] = true;
	map[y][x] = label;
	house++;
	
	for(int i=0;i<4;i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		
		if(nx <0 || ny <0 || nx >=n || ny >=n){
			continue;
		}
		
		if(map[ny][nx] == 1 && visited[ny][nx] == 0){
			DFS(ny,nx);
		}
		
	}
	
	
}



int main() {

  
  cin >> n;
  
  for(int i=0;i<n;i++){
  	string input;
  	cin >> input;
  	
  	for(int j=0;j<n;j++){
  		map[i][j] = input.at(j) - '0';
	  }
  	
  }
  
  
  for(int i=0;i<n;i++){
  	for(int j=0;j<n;j++){
  		if(map[i][j] == 1 && visited[i][j] == 0){
  			DFS(i,j);
  			label++;
  			v.push_back(house);
			house=0; 
		  }
	  }
  }
  
  sort(v.begin(),v.end());
  
  cout << label-1 << endl;
  for(int i=0;i<v.size();i++){
  	cout << v[i] << endl;
  }
  
  return 0;
}
