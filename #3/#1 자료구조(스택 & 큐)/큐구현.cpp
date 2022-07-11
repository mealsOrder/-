#include <stdio.h>


struct Queue {
  
  int data[100];
  int f, r;
  int capacity;
  
  
  void create(int y){
    capacity = y;
    f = 0;
    r = 0;
  }
  
  void push(int y){
    if(r - f >= capacity){
      printf("Queue Overflow!\n");
    }
    else{
      data[r++] = y;
    }
  }
  
  void pop(){
    if(r - f <=0){
      printf("Queue Underflow!\n");
    }
    else{
      data[f] = 0;
      f ++;
    }
    
  }
  
  
  int front(){
    // ť�� �� �տ� �ִ� ���Ҹ� ��ȯ
    // ��, ��ȯ�� ���� ���ٸ� -1
    
    if(r - f <=0){
      return -1;
    }
    else{
      return data[f];
    }
  }
  
  int size(){
    return r-f;
  }
  
};

int main() {
  Queue q1;
  
  q1.create(3);
  
  q1.push(1);
  q1.push(2);
  q1.push(3);
  q1.push(4); // Overflow
  q1.push(5); // Overflow
  
  printf("%d\n",q1.front()); // 1
  
  q1.pop();
  q1.pop();
  
  printf("%d\n",q1.front()); // 3
  printf("%d\n",q1.size()); // 1 
   
  q1.pop();
  q1.pop(); // Underflow
  
  printf("%d\n",q1.size()); // 0
  
  return 0;
}
