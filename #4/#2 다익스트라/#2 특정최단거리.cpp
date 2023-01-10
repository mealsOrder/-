#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

const int MAX = 1000001;
const int IFI = 9999999;

vector <int> graph[MAX];
vector <int> cost[MAX];

bool check[MAX];
int table[MAX];

int main(){
	
	int n,m,s,e;
	
	cin >> n >> m;
	
	for(int i=0;i<m;i++){
		int a,b;
		
		cin >> a >> b;
		graph[a].push_back(a);
		graph[b].push_back(b);
		
		cost[a].push_back(1);
		cost[b].push_back(1);
		
	}
	
	cin >> s >> e;
	
	for(int i=0;i<n;i++){
		table[i] = IFI;
	}
	
	table[s] = 0;
	
	for(int i=0;i<n;i++){
		
		int minValue = IFI, minIndex = -1;
		
		for(int j=0;j<n;j++){
			if(!check[j] && minValue > table[j]){
				minValue = table[j];
				minIndex = j;
			}
		}
		
		check[minIndex] = true;
		
		for(int j=0;j<graph[minIndex].size();j++){
			int node2 = graph[minIndex][j];
			int cost2 = cost[minIndex][j];
			
			if(table[node2] > table[minIndex] + cost2){
				table[node2] = table[minIndex] + cost2;
			}
			
		}
		
	}
	
	cout << table[e] << endl;
	
	return 0;
}
