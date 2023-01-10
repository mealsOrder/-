#include<iostream>

using namespace std;
const int MAX = 100002;


int dp[MAX];


int main(){
	int t;
	
	cin >> t;
	
	dp[0] = 1;
	dp[1] = 2;
	dp[2] = 4;
	
	while(t--){
		int n;
	
		cin >> n;
		
		for(int i=3;i<n;i++){
			dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
		}
		
		cout << dp[n-1] << endl;	
	}
	return 0;
}
