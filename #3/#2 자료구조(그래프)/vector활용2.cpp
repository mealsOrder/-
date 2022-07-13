#include <cstdio>
#include <vector>



using namespace std;

int main() {
  
  vector <int> arr; // 크기 지정 안했으므로 처음 크기는 0
  
  arr.push_back(1);
  arr.push_back(2);
  arr.push_back(3);
  
  printf("%d ",arr[0]);
  printf("%d ",arr[1]);
  printf("%d ",arr[2]);
  
  printf("\n");
  
  arr.pop_back();
  
  printf("%d \n",arr.size()); // 2
  
  
  arr.resize(10,5);
  
  for(int i=0;i<arr.size();i++){
    printf("%d ",arr[i]);
  }
  
  printf("\n");
  
  arr.resize(5);
  
  for(int i=0;i<arr.size();i++){
    printf("%d ",arr[i]);
  }
  
  printf("\n");
  return 0;
}
