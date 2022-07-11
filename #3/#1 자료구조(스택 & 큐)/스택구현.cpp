#include <stdio.h>

// 스택 구현하기 ( Stack )

// S.create(y)
// S.push(y)
// S.pop()
// S.top()
// S.size()


struct Stack {
  
  int data[100];
  int len = 0;
  int capacity = 0; // 스택의 크기
  
  void create(int y) {
    capacity = y;
  }
  
  void push(int y){
    
    // capacity를 넘으면 오버플로우를 알려야함
    
    if(len >= capacity){
      printf("Stack Overflow!\n");
    }
    else{
      data[len++] = y;
    }
    
  }
  
  void pop(){
    
    // 가지고 있는것이 아무것도 없으면 언더플로우를 알려야함
    
    if(len <= 0){
      printf("Stack underflow!\n");
    }
    else{
      data[len-1] = 0;
      len --;
    }
    
  }
  
  int top(){
    // 스택의 가장 위에 있는 원소를 반환
    // 단 스택에 아무것도 없다면 -1을 반환
    
    if(len<=0){
      return -1;
    }
    else{
      return data[len-1];
    }
  }
  
  
  int size(){
    // 스택 안에 들어있는 원소의 개수를 반환
    
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
  
  printf("%d\n",s1.size()); // 아무것도 없으니 크기 0
  
  
  return 0;
}
