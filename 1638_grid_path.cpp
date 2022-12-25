#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
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
const int INF32 = INT32_MAX;
const int MOD = 1000000007; 

int solve(int n, vector<vector<int>> v){
    vector<vector<ll>> dp(n, vector<ll>(n,0));
    ll up, left; 
    FOR(i, n) {
        if (!v[0][i]) break; 
        dp[0][i] = 1; 
    }
    FOR(i,n) {
        if (!v[i][0]) break; 
        dp[i][0] = 1; 
    }

    FIR(i, n){
        FIR(j,n){
            if (v[i][j]) {
                up = i-1 >= 0 && v[i-1][j]? dp[i-1][j]: 0;
                dp[i][j] = (dp[i-1][j] + dp[i][j-1])%MOD;
            }
        }
    }
    return dp[n-1][n-1];
}

int main(){
    ANMR
    int t;
    string line;
    cin >> t;

    vector<vector<int>> v (t, vector<int>());
    FOR(i, t) {
        cin >> line; 
        for (char c: line){
            v[i].push_back(c == '.' ? 1: 0);
        }
    }

    cout << solve(t, v) << endl;

}