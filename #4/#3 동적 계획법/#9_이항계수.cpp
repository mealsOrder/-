#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <fstream>
#include <string>
#include <vector>
#include <set>
#include <utility>

using namespace std;

const int MAX = 100;
int bc[MAX][MAX];

int c(int n,int r){
	int a,b;
	if(r>n) return 0;
	if(bc[n][r]>0) return bc[n][r];
	if(n==r||r==0){
		bc[n][r] = 1;
		return 1;
	}
	a = c(n-1,r);
	b = c(n-1,r-1);
	bc[n][r] = a+b;
	return bc[n][r];
}

int main() {
	
	int x,y,z;
	
	cin >> x >> y;
	
	cout << c(x,y) << endl;
	
	
	return 0;
}
