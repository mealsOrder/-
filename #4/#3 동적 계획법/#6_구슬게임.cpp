#include<iostream>

using namespace std;
const int MAX = 1000005;

int d[MAX];
int arr[MAX];


int main(){
	int n;
	
	cin >> n;
	
	
	if(n%4 == 0){
		cout << "NO\n";
	}
	else{
		cout << "YES\n";
	}
	
	return 0;
}
