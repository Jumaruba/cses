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

void solve(){
    int l , r; 
    cin >> l >> r ;   

    if (l == r && l % 3 == 0 && r % 3 == 0) {
        cout << "YES" << endl; 
        return; 
    } 
    // a-2*n = b -n
    // a = b+n
    int a  = min(r,l);
    int b = max(r,l); 
    int n = b-a; 
    a -= n; 
    b -= 2*n; 

    //cout << a << " " << b << endl;
    if (b < 0 || a < 0){ 
        cout << "NO" << endl;  
    } else if (a == b && a % 3 == 0 && b % 3 == 0) {
        cout << "YES" << endl; 
    } else if (a == b) {
        cout << "NO" << endl; 
    }

}
int main(){
    ANMR
    int t;
    cin >> t;
    while (t--) solve();

}