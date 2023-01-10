#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
#include <string>


using namespace std;

const int MAX = 100000;
const int M_LEN = 31;

vector <tuple<string,string,string>> v2;

int main(){
	
	freopen("test.txt", "r", stdin);
	freopen("a.txt", "w", stdout);
	
	int n;
	int orderNum;
	string code;
	string first;
	string last;
	
	
	cin >> n;
	
	while(n!=0){
		cin >> code;
		cin >> first;
		cin >> last;
		v2.push_back(make_tuple(code,first,last));
		n--;
	}
	
	
	for(int i=0;i<v2.size();i++){
		cout << get<0>(v2[i]) << " " << get<1>(v2[i]) << " " << get<2>(v2[i]) << "\n";
	}
	
	return 0;
	
}