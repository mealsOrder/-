#include<iostream>
#include<vector>

using namespace std;

const int MAX = 1005;

int d[MAX][MAX];

int getMin(int n1, int n2){
	return n1 < n2 ? n1: n2;
}

int main(){
	
	string a,b;
	
	cin >> a >> b;
	
	int lenA = a.length()+1;
	int lenB = b.length()+1;
	
	for(int i=0;i<lenA;i++){
		d[i][0] = i;
	}
	
	for(int i=0;i<lenB;i++){
		d[0][i] = i;
	}
	
	for(int i=1;i<lenA;i++){
		for(int j=1;j<lenB;j++){
			// 두 문자가 같은 경우, 추가 연산이 필요하지 않으므로 i-1,j-1에서 가져옴 
			
			if(a[i-1] == b[j-1]){
				d[i][j] = d[i-1][j-1];
			}
			// 두 문자가 다른 경우 (교체 추가 삭제 중 cost가 작은것을 기록
			else{
				d[i][j] = 1 + getMin( d[i][j - 1], getMin(d[i - 1][j - 1], d[i - 1][j]));
			}	
		}
	}
	cout << d[lenA-1][lenB-1] << endl;
	return 0;
}
