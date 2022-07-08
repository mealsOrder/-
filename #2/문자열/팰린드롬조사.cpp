#include <stdio.h>
#include <string.h>
int main() {

  //Please Enter Your Code Here
  
  char a[1001],b[1001];
  
  fgets(a,1000,stdin);
  
  int lenA = strlen(a);
  //printf("%d\n",lenA);
  bool flag = false;
  for(int i=lenA;i>0;i--){
    b[i-1] = a[lenA-i];
    
  }
  
  
  for(int i=0;i<lenA;i++){
    //printf("%c",b[i]);
    if(a[i] != '\0' && b[i] != '\0'){
      if(b[i] == a[i]){
        flag = true;
        
      }
      else{
        flag = false;
        break;
      }
    }
    
  }
  
  if (flag == true) printf("YES\n");
  else printf("NO\n");
  
  return 0;
}
