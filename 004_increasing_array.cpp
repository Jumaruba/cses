#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
#define ull unsigned long long
#define printd(x) printf("%d\n", x)
#define prints(x) printf("%s\n", x)
#define scand(x) scanf("%d", &x)
#define scans(x) scanf("%s", &x)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int s, p = -1, n;
    ull t = 0;  
    scand(s);  
    for (int i = 0; i < s ; i++) { 
        scand(n);    
        if (n < p) {
            t += p-n; 
            n = p; 
        }
        p = n; 
    }
    cout << t << endl; 
}