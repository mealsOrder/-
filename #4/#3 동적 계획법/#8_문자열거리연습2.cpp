#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

const int MAX = 1001;

int getD(string first, string second){
	int m = first.length();
	int n = second.length();
	
	int T[m+1][n+1];
	for(int i=1;i<=m;i++){
		T[i][0] = i;
	}
	
	for(int j=1;j<=n;j++){
		T[0][j] = j;
	}
	
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			int dis;
			if(first[i-1] == second[j-1]){
				dis = 0;
			}
			else{
				dis = 1;
			}
			
			T[i][j] = min(min(T[i-1][j]+1,T[i][j-1]),T[i-1][j-1]+dis);
		}
	}
	
	return T[m][n];
}

double find(string first, string second){
	double max_len = max(first.length(),second.length());
	
	if(max_len > 0){
		return (max_len - getD(first,second) / max_len );
	}
	
	return 1;
	
}

int main(){
	string o,k;
	
	getline(cin,o);
	getline(cin,k);
	
	int similarity = getD(o, k);
    cout << similarity << endl;        // 0.545455
	
	

	
	return 0;
}
