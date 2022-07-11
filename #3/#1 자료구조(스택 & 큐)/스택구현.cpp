#include <stdio.h>

// ���� �����ϱ� ( Stack )

// S.create(y)
// S.push(y)
// S.pop()
// S.top()
// S.size()


struct Stack {
  
  int data[100];
  int len = 0;
  int capacity = 0; // ������ ũ��
  
  void create(int y) {
    capacity = y;
  }
  
  void push(int y){
    
    // capacity�� ������ �����÷ο츦 �˷�����
    
    if(len >= capacity){
      printf("Stack Overflow!\n");
    }
    else{
      data[len++] = y;
    }
    
  }
  
  void pop(){
    
    // ������ �ִ°��� �ƹ��͵� ������ ����÷ο츦 �˷�����
    
    if(len <= 0){
      printf("Stack underflow!\n");
    }
    else{
      data[len-1] = 0;
      len --;
    }
    
  }
  
  int top(){
    // ������ ���� ���� �ִ� ���Ҹ� ��ȯ
    // �� ���ÿ� �ƹ��͵� ���ٸ� -1�� ��ȯ
    
    if(len<=0){
      return -1;
    }
    else{
      return data[len-1];
    }
  }
  
  
  int size(){
    // ���� �ȿ� ����ִ� ������ ������ ��ȯ
    
    return len;
  }
  
};

int main() {
  Stack s1;
  
  s1.create(5);
  
  s1.push(1);
  s1.push(2);
  s1.push(3);
  s1.push(4);
  s1.push(5);
  s1.push(6); // Overflow
  s1.push(7); // Overflow
  
  printf("%d\n",s1.top()); // 5
  
  s1.pop();
  
  printf("%d\n",s1.top()); // 4
  
  s1.push(6);
  s1.push(7); // Overflow
  
  printf("%d\n",s1.top()); // 6
  
  s1.pop();
  s1.pop();
  s1.pop();
  s1.pop();
  s1.pop(); // underflow
  
  printf("%d\n",s1.size()); // �ƹ��͵� ������ ũ�� 0
  
  
  return 0;
}
