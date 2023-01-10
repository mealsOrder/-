#include <iostream>
using namespace std; 
const int MAX = 100002;
const int LARGE = 9999999;
int dp[MAX];

int getMin(int a,int b){
	return a>b ? b: a;
}

int main(){
	
	int n;
	int s;
	
	cin >> n;
	
	
	for(int i=1;i<=n;i++){
		dp[i] = LARGE;
		for(int j=1;;j++){
			if( i-(j*j) <0 ) break;
			else if(i == j*j) dp[i] = 1;
			else{
				dp[i] = getMin(dp[i],dp[i-j*j]+1);
			}
		}
	}	
	
	cout << dp[n] << endl;
	
	return 0;
}
