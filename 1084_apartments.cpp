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

void solve(int ps, int aps, int k){
    vector<int> ap(aps); 
    vector<int> p(ps); 
    FOR(i, ps) cin >> p[i] ; 
    FOR(i, aps) cin >> ap[i];
    sort(ap.begin(), ap.end());
    sort(p.begin(), p.end());
    int api = 0, pi = 0, total = 0;
    while(api < aps && pi < ps){
        if (p[pi] > ap[api] + k) api++;
        else if (p[pi] < ap[api] - k) pi ++;
        else {
            pi++; 
            api++;
            total++;
        }
    }
    cout << total << endl; 
}

int main(){
    ANMR
    int n,m,k;
    cin >> n >> m >> k;
    solve(n, m, k);

}