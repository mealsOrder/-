#include <iostream>

using namespace std;

const int MAX = 1002;

long long int F[MAX];

int main(){
	F[0] = 1;
	F[1] = 1;
	int n;
	cin >> n;
	
	for(int i=2;i<=n;i++){
		F[i] = F[i-1]+F[i-2];
	}
	
	cout << F[n];
	
	
	return 0;
}
