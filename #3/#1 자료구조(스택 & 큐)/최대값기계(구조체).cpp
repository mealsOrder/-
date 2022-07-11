#include <stdio.h>

struct maxMachine{
  
  int data[100];
  int len=0;
  
  void insertNumber(int x){
    data[len++] = x;
  }  
  
  void removeNumber(int x){
    
    for(int i=0;i<len;i++){
      
      if(data[i] == x){
        
        for(int j=i;j<len;j++){
          data[j] = data[j+1];
        }
        
        len --;
        
        return;
        
      }
    }    
  }
  
  int getMax(){
    int maxNum = -999999999;
    
    
    for(int i=0;i<len;i++){
      
      if(data[i] > maxNum){
        maxNum = data[i];
      }
      
    }
    
    return maxNum;
    
  }
  
};

int main() {
  // ����ü�� ĸ��ȭ�� �����ϱ� ���� ����
  // ����ü�� Ÿ���� �����ϴ� ���̴�
  
  
  // maxMachine�� �ڷᱸ��
  // struct�� �̿��Ͽ� maxMachine�̶�� �ڷᱸ���� "����"
  // maxMachine�̶�� �ڷᱸ�� m1,m2�� "����"
  
  
  // maxMachine <- Ÿ������ ������ �ƴ�! , struct, class
  // m1,m2 �� ����, �ν��Ͻ� (instance) ��ü. ��ü�� �ִ� ����
  
  // maxMachine�̶�� struct�� �ν��Ͻ� m1,m2
  maxMachine m1, m2; 
  
  m1.insertNumber(10);
  m1.insertNumber(20);
  m1.insertNumber(5);
  m1.insertNumber(30);
  
  m2.insertNumber(10);
  m2.insertNumber(20);
  
  
  printf("%d\n",m1.getMax()); // 30
  
  m1.removeNumber(30);
  m1.removeNumber(10);
  
  printf("%d\n",m1.getMax()); // 20
  
  m1.removeNumber(20);
  
  printf("%d\n",m1.getMax()); 
  printf("%d\n",m2.getMax()); 
  
  return 0;
}
