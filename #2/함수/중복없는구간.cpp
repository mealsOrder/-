#include<stdio.h>

const int MAX = 100010;

int n,result=0;
int arr[MAX];

bool check(int interval){
	int s = 0;
	int cnt[MAX] = {0,};
	int dup = 0;
	
	for(int i=s;i< s + interval;i++){
		cnt[arr[i]] ++;
	}
	
	for(int i=1;i<=n;i++){
		if(cnt[i] >= 2) dup++;
	}
	
	if(dup == 0) return true;
	
	
	while(s+interval < n){
		cnt[arr[s]]--;
		if(cnt[arr[s]] == 1){
			dup--;
		}
		s++;
		cnt[arr[s + interval - 1]] ++;
		if(cnt[arr[s+interval - 1]] == 2){
			dup++;
		}
		if(dup == 0){
			return true;
		}
	}
	return false;
	
}

int main(){
	
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int start = 1;
	int end = n;
	
	if(!check(start)){
		printf("1\n");
		return 0;
	}
	if (check(end)){
		printf("%d\n",end);
		return 0;
	} 
	
	
	while(start+1 < end){
		
		int mid = (start+end) /2;
		
		if(check(mid)){
			start = mid;
		}
		else{
			end = mid;
		}
		
	}
	
	
	printf("%d\n", start);
	
	return 0;
}
