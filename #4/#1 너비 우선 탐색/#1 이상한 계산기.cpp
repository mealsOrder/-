#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;


int n;

bool visited[100000];

queue<int>q;
int cur,size,d;

int main() {
  
  
  cin >> n;
  
  // ť�� �ʱⰪ �����ϱ�  
  d = 0;
  q.push(1);
  visited[1] = true;
  
  // ť�� ���� ���� �ݺ��ϱ� 
  while(!q.empty()){
  	size = q.size();
  	
  	while(size --){
  		cur = q.front();
  		q.pop();
  		
  		
  		if(cur == n){
  			cout << d << endl;
  			return 0;
		}
		if(2*cur< 100000 && !visited[2*cur]){
	  		q.push(cur * 2);
	  		visited[cur * 2] = true;
	  	}
	  	if(!visited[cur / 3]){
	  		q.push(cur / 3);
	  		visited[cur / 3] = true;
		}
	}
	 d ++;
  }
  
  
  return 0;
}
