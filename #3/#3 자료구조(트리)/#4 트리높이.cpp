#include <iostream>
#include <vector>

using namespace std;

const int MAX = 101;

int n,r;
int arr[MAX][MAX];
int ans;


// Ʈ���� ���̸� ����ϴ� �Լ��� ����
// cur : ���� ���, prv : ���� ���, depth : ���� 
void get_depth(int cur,int prv,int depth){
	int i;
	
	// ���亸�� depth�� �� ũ�ٸ� ������ ���� 
	if(ans < depth){
		ans = depth;
	}
	
	// ��ü ����� ����Ǿ� �ְ�, ���� ��尡 �ƴ� ������ �湮 
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
