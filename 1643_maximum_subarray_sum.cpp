#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ul unsigned long
#define ll long long int

// CONTROL STRUCTURES
#define FOR(i, a) for (int i=0; i<(a); i++)
#define FIR(i, a) for (int i=1; i<(a); i++)
#define all(vec)  vec.begin(),  vec.end()
#define ANMR cin.tie(0)->sync_with_stdio(0);
// CONSTANTS
const ll INF32 = INT32_MAX;
const int MOD = 1000000007;

void solve(int t){
    ll best = -INF32, curr = -INF32, aux; 
    FOR(i,t){
        cin >> aux;
        curr = curr < 0 ? aux : curr+aux; 
        best = max(curr, best); 
    }
    cout << best << endl;
}
int main(){
    ANMR
    int t;
    cin >> t;
    solve(t);

}