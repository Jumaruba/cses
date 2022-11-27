#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
#define ull unsigned long long
#define ll long long 
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
 
ull sum(ull n){
    return (n)*(n+1)/2;
}
 
void solve(ull n){
    if (sum(n) % 2== 1) {
        cout << "NO" << endl; 
        return;
    }
 
    cout << "YES" << endl;  
    if (n % 4 == 3) {
        cout << n/2 + 1 << endl; 
        for (int i = 2 ; i < n-1; i++) if (i%4 == 2 || i%4 == 1) cout << i << " ";
        cout << 1 << " " << n-1 << endl; 
        cout << n/2 << endl; 
        for (int i = 2; i < n-1; i++) if (i%4 == 3 || i%4 == 0) cout << i << " "; 
        cout << n << endl; 
    }else{
        cout << n/2 << endl; 
        FIR(i, n+1) if (i%4 == 2 || i%4 == 3) cout << i << " "; 
        cout << endl;
        cout << n/2  << endl;
        FIR(i, n+1) if (i%4 == 1 || i%4 == 0) cout << i << " "; 
        cout << endl; 
    }

} 
int main(){
    ANMR
    ull t;
    cin >> t;
    solve(t); 
}