#include<iostream>
using namespace std;
typedef unsigned long long ull; 

int main(){
    ull mn, s, t; 

    scanf("%llu", &mn); 
    s = ((1+mn) * mn)/2; 
    for (int i = 0 ; i < mn-1; i++){
        scanf("%llu", &t); 
        s -= t; 
    }
    printf("%llu\n", s); 

}