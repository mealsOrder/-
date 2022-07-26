#include <iostream>
#include <vector>

using namespace std;


const int MAX = 1001;

int n,x,y,d;
int dist[MAX];
int parent[MAX] = {0,};
bool visited[MAX] = {0,};


int main(){
	
	cin >> n >> x >> y;
	
	for(int i=0;i<n-1;i++){
		int a,b;
		
		cin >> a >> b ;
		
		parent[b] = a;		
		
	}
	
	
	visited[x] = true;
	
	while(x > 0){
		dist[parent[x]] = dist[x]+1;
		visited[parent[x]] = true;
		x = parent[x];	
	}
	
	d = 0;
	
	while(y != 0){
		if(visited[y] != false ){
			break;
    	}
    	//visited[y] = true;
    	y = parent[y];
    	d++;
	}
	
	cout << d + dist[y] << endl;
	
	return 0;
	
}
