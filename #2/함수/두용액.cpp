#include <stdio.h>
#include <cstdio>
#include <algorithm>
#include <math.h>

const int MAX = 100010;
long long int arr[MAX];

using namespace std; 

int main(){
	
	int n;
	
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%lld",&arr[i]);
	}	
	
	sort(arr,arr+n);
	
	int start=0, end=n-1;
	
	long long int val;
	long long int as = arr[start], ae = arr[end], result = as + ae;
	
	while(start <= end){
		val = arr[start] + arr[end];
		
		if(abs(result) > abs(val)){
			result = val;
			as = arr[start];
			ae = arr[end];
		}
		
		if(val <= 0){
			start++;
		}
		else{
			end --;
		}
	}
	
	
	printf("%lld %lld\n",as,ae);
	return 0;
}
