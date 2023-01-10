#include<iostream>
/*
입력  
 
5 6
1 7 3 2 8 0
9 2 3 4 5 4
3 4 7 8 2 2
1 4 3 1 4 1
3 2 5 5 3 8

출력 
49 

*/

using namespace std;

const int MAX = 1005;

int d[MAX][MAX];
int arr[MAX][MAX];

int getMax(int n1, int n2){
	return n1 > n2 ? n1: n2;
}

int main(){
	int n,m;
	
	cin >> n >> m;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin >> arr[i][j];
		}
	}
	
	// 초기값 설정
	/*  
		0 0 0 0 0 0 0 
		0 1 7 3 2 8 0
		0 9 2 3 4 5 4
		0 3 4 7 8 2 2
		0 1 4 3 1 4 1
		0 3 2 5 5 3 8
	*/
	
	for(int k=0;k<n+1;k++){
		d[k][0] = 0;
	}
	
	for(int g=0;g<m+1;g++){
		d[0][g] = 0;
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			d[i][j] = getMax(d[i-1][j],d[i][j-1])  + arr[i][j];
		}
	}
	
	cout << d[n][m] << endl;
	
	return 0;
}
