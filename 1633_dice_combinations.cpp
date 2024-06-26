#include <iostream>
#include <cstring>
#include <vector>
#include <climits>
#include <unordered_map>
using namespace std;
#define ull unsigned long long
#define ul unsigned long
#define ll long long int

// CONTROL STRUCTURES
#define FOR(a) for (int i=0; i<(a); i++)
#define FIR(a) for (int i=1; i<(a); i++)
#define all(vec)  vec.begin(),  vec.end()
#define ANMR cin.tie(0)->sync_with_stdio(0);
// CONSTANTS
const int INF = INT_MAX;
const int MOD = 1000000007;



int main(){
    ANMR
    int n; 
    cin >> n; 
    vector<long> dp(n+1,0);

    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 6; j++) {
            if (i-j >= 0) dp[i] += dp[i-j];
        }
        dp[i] %= MOD;
    }
    
    cout << dp[n] << endl;
}

