#include <iostream>
using namespace std; 
typedef unsigned long long ull; 

int main(){
  ull n; 
  scanf("%llu", &n);
  while (n  > 1){
    printf("%llu ", n);
    n = n %2 == 0? n/2 : n*3+1; 
  }
  printf("1\n"); 

}
