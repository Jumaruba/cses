#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
#define ull unsigned long long
#define printd(x) printf("%d\n", x)
#define prints(x) printf("%s\n", x)
#define scand(x) scanf("%d", &x)
#define scans(x) scanf("%s", &x)


// DEBUG CODE ========================================================= 
#define DEBUG 0 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t; 
    ull x, y, n, v;
    cin >> t; 
    for (int i = 0; i < t; i++) {
        cin >> x >> y ; 
        n = max(x,y); 
        v = n%2 == 1? n*n-(n-1)+(y-x) : n*n-(n-1)-(y-x);
        cout << v << endl; 
    }
}