#include <iostream>
/*
숫자 만들기 
*/
using namespace std;

const int MAX = 100004;

long long int T[MAX];



int main() {
	int n;
	T[0] = 0;
	T[1] = 1;
	T[2] = 2;
	T[3] = 4;
	
	cin >> n;
	
	if(n<4){
		cout << T[n] % 1000007;
	}
	else{
		for(int i=4;i<=n;i++){
			T[i] = (T[i-1]+T[i-2]+T[i-3])% 1000007;
		}
	}
	
  	cout << T[n] << endl;
  	
  
	return 0;
}
