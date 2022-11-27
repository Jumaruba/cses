#include<iostream>
#include <string.h> 
#include <algorithm>
using namespace std;
#define ull unsigned long long;
#define printd(x) printf("%d\n", x)
#define prints(x) printf("%s\n", x)
#define scand(x) scanf("%d", &x)
#define scans(x) scanf("%s", &x)

int main(){
    char d[1000000]; 
    int s, mun=1, mn = 1; 
    scans(d); 
    s = strlen(d); 
    for (int i = 1 ; i < s; i++){
        if (d[i] == d[i-1]) mn++; 
        else mn = 1; 
        mun = max(mn, mun); 
    }
    printd(mun);
}