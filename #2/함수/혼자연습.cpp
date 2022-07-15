#include <stdio.h>
#include <cstdio>
#include <algorithm>

const int MAX = 100010;

int n;
int parr[MAX]; // 양수저장 
int narr[MAX]; // 음수 저장 
int pidx,nidx; 

using namespace std;

int main(){
	
	int a;
	int min_value, abs_value;
	int ans_small, ans_big;
	int start, end;
	int idx;	// 양수 중 음수의 절대값과 가장 가까운 양수의 배열상 인덱스 
	
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		
		if( a>0) parr[i] = a;
		else narr[i] = a;
	}
	
	sort(parr,parr+n);
	sort(narr,narr+n);
	
	
	min_value = 2000000000;
	
	if(nidx >= 2 ){
		if(min_value > -(narr[nidx - 1] + narr[nidx - 2])){
			min_value = -(narr[nidx - 1] + narr[nidx - 2]);
			ans_small = narr[];
			ans_big = narr[]
		}
	}
	
	
	return 0;
}
