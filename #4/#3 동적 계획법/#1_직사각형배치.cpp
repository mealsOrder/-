#include <iostream>
/*
	���簢�� ��ġ�� ����� ��
	2 * N Ÿ�� (�Ǻ���ġ���� DP) 
*/
using namespace std;

const int MAX = 103;

long long int T[MAX];


int main() {
  int n=0;
  
  T[1] = 1;
  T[2] = 2;
  
  cin >> n;
  
  if(n<3){
    cout << T[n] % 1000007;
  }
  else{
    for(int i=3;i<=n;i++){
      T[i] = (T[i-1] + T[i-2])% 1000007;
    }
    cout << T[n];
  }
  
  
  return 0;
}
