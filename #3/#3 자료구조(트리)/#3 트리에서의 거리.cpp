#include <iostream>
#include <vector>

using namespace std;


const int MAX = 1000;

int d = 0;
int parent[MAX] = {0,};
bool visited[MAX] = {0,};
int n,x,y;


int main(){
	
	cin >> n >> x >> y;
	
	for(int i=1;i<n;i++){
		int a,b;
		
		cin >> a >> b ;
		
		parent[b] = a;		
		
	}
	
	while(1){
		visited[x] = true;
		
		if(x == 0){
			break;
		}
		x = parent[x];
		d++;	
		
		
	}
	
	
	while(1){
		if(visited[y] == true){
			if(y == 0 || parent[y] == 0){
				break;
			}
			//visited[y] = true;
			y = parent[y];
      		d++;
      		
    	}
    	visited[y] = true;
    	y = parent[y];
    	d++;
		
	}
	
	cout << d << endl;
	
	return 0;
	
}
