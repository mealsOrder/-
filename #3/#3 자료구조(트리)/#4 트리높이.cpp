#include <iostream>
#include <vector>

using namespace std;

const int MAX = 101;

int n,r;
int arr[MAX][MAX];
int ans;


// 트리의 깊이를 계산하는 함수를 구현
// cur : 현재 노드, prv : 이전 노드, depth : 깊이 
void get_depth(int cur,int prv,int depth){
	int i;
	
	// 정답보다 depth가 더 크다면 정답을 갱신 
	if(ans < depth){
		ans = depth;
	}
	
	// 전체 노드중 연결되어 있고, 이전 노드가 아닌 곳으로 방문 
	for(int i=0;i<n;i++){
		if(i==prv) continue;
		
		if(arr[cur][i] == 1){
			get_depth(i,cur,depth+1);
		}
	}
	
}

int main(){
	
	cin >> n >> r;
	
	for(int i=0;i<n-1;i++){
		int a,b;
		cin >> a >> b;
		
		arr[a][b] = 1;
		arr[b][a] = 1;
		
	}
	
	get_depth(r,-1,0);
	
	cout << ans << endl;
	return 0;
	
}
