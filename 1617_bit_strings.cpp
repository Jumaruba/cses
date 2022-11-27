#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
#define ull unsigned long long
#define ul unsigned long
// IN OUT
#define printd(x) printf("%d\n", x)
#define prints(x) printf("%s\n", x)
#define scand(x) scanf("%d", &x)
#define scans(x) scanf("%s", &x)

// CONTROL STRUCTURES
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FIR(i, a) for (int i=1; i<(a); i++)
#define all(vec)  vec.begin(),  vec.end()
#define ANMR cin.tie(0)->sync_with_stdio(0);

#define MOD 1000000007
void solve(ul v){
    ull res = 1; 
    F0R(i, v) {
        res = res*2 % MOD;
    }
    cout << res << endl; 
}

int main(){
    ANMR
    int t;
    cin >> t;
    solve(t);
}