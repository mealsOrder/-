#include <iostream>
using namespace std;

const int MAX = 101;

int ans[MAX][2];


void preorder (int x){
	if(x==-1){
		return;
	}
	cout << x << ' ';
	preorder(ans[x][0]);
	preorder(ans[x][1]);
}


void inorder (int x){
	if(x==-1){
		return;
	}
	inorder(ans[x][0]);
	cout << x << ' ';
	inorder(ans[x][1]);
	
	
}


void postoder(int x){
	if(x==-1){
		return;
	}
	postoder(ans[x][0]);
	postoder(ans[x][1]);
	cout << x << ' ';
}


int main(){
	
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		int a,b,c;
		cin >> a >> b >> c;
		if(b==-1){
			ans[a][0] = -1;
		}
		else{
			ans[a][0] = b;
		}
		
		if(c==-1){
			ans[a][1] = -1; 
		}
		else{
			ans[a][1] = c;
		}
		
	}
	preorder(0);
	cout << '\n';
	inorder(0);
	cout << '\n';
	postoder(0);
	cout << '\n';
	
	
	return 0;
}
