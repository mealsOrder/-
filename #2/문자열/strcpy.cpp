#include <stdio.h>
#include <string.h>
int main() {

  //Please Enter Your Code Here
  
  char A[100], B[100];
  
  scanf("%s",A);
  scanf("%s",B);
  
  printf("%s\n",A);
  printf("%s\n",B);
  
  int lenB = strlen(B);
  // ������ ������ �����ؾ��Ѵ� '\0' �ι��� üũ�ؾ���
  for(int i=0;i<lenB;i++){
    A[i] = B[i];
  }
  A[lenB] = '\0';
  printf("%s\n", A);
  printf("%s\n",B);
  return 0;
}
