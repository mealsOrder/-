#include<iostream>

using namespace std;
const int MAX = 100002;
 

int dp[MAX];
int arr[MAX];

int getMax(int n1, int n2){
	return n1 > n2 ? n1: n2;
}

int main(){
	
	int n;
	
	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	
	dp[0] = arr[0]; //1
	dp[1] = arr[0] + arr[1];//4
	dp[2] = getMax(arr[0]+arr[1], getMax(arr[1]+arr[2],arr[0]+arr[2]));
	
	for(int i=3;i<n;i++){
		dp[i] = getMax(dp[i-1],getMax(dp[i-2]+arr[i],dp[i-3]+arr[i-1]+arr[i]));
	}
	
	cout << dp[n-1] << endl;
	return 0;
}
