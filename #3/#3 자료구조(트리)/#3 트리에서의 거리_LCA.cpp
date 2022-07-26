#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1000;

int n;
int depth[MAX];
int parent[MAX];
bool check[MAX] = {0,};
vector <pair<int,int>> adj[MAX];

int val_len(int node, int par){
	for(int i=0;i<adj[par].size();i++){
		if(adj[par][i].first == node){
			return adj[par][i].second;
		}
	}
}

void print_dep(void){
    for(int i = 1;i<=N;i++){cout << depth[i] <<" ";}
    cout << "\n";
}
void print_par(void){
    for(int i =1;i<=N;i++){cout << parents[i] <<" ";}
    cout << "\n";
}
void LCA(int node_a,int node_b, int val){
	if(node_a == node_b){
		cout << val << endl;
		return;
	}
	
	else if( depth[node_a] == depth[node_b]){
		val = val+val_len(node_a,parent[node_a]) + val(node_b,parent[node_b]);
		LCA(parent[node_a],parent[node_b],val);
	}
	else if(depth[node_a]<depth[node_b]){
        val = val + val_len(node_b,parents[node_b]);
        LCA(node_a,parents[node_b],val);
    }
    else if(depth[node_a]>depth[node_b]){
        val = val+val_len(node_a,parents[node_a]);
        LCA(parents[node_a],node_b,val);
    }
    return;   
}

void DFS(int node, int dep){
	depth[node] = dep;
	check[node] = true;
	for(int i=0;i<adj[node].size();i++){
		int next_node = adj[node][i].first;
		if(check[next_node] == true) {
			continue;
		}
		parent[next_node] = node;
		DFS(next_node,dep+1);
	}
}

int main(){
	
	
	cin >> N;
    for(int i = 0;i<N-1;i++){
        int a,b,c;
        cin >> a >> b >> c;
        adj[a].push_back(make_pair(b,c));
        adj[b].push_back(make_pair(a,c));
    }
    DFS(1,0);
    //print_dep();
    //print_par();
    cin >> M;
    for(int i = 0;i<M;i++){
        int a,b;
        cin >> a >> b;
        LCA(a,b,0);
	}
	
	return 0;
}


