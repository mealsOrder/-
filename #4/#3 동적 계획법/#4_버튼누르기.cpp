#include<iostream>

using namespace std;
const int MAX = 100005;

int dp[MAX][3];
int arr[MAX][3];

int getMax(int n1, int n2){
	return n1>=n2 ? n1: n2;
}


int main(){
	int t;
	
	cin >> t;
	
	for(int i=0;i<t;i++){
		
		for(int j=0;j<3;j++){
			cin >> arr[i][j];
						
		}
			
	}
	
	// 초기 값 설정  
	 
	dp[0][0] = arr[0][0];
	dp[0][1] = arr[0][1]; 
	dp[0][2] = arr[0][2];
	 
	// 점화식  
	for(int k=1;k<t;k++){
		
		dp[k][0] = getMax(dp[k-1][1],dp[k-1][2]) + arr[k][0];
		dp[k][1] = getMax(dp[k-1][0],dp[k-1][2]) + arr[k][1];
		dp[k][2] = getMax(dp[k-1][0],dp[k-1][1]) + arr[k][2];
	}
	
	
	cout << getMax( dp[t-1][0] ,getMax(dp[t-1][1],dp[t-1][2])) << endl;
	
	return 0;
}
