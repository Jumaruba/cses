#include <iostream>
#include <cstring>
#include <vector>
#include <unordered_map>
#include <climits> 
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
    int n, x, tmp; 

    cin >> n >> x; 
    unordered_map<int, int> um; 
    FOR(n) {
        cin >> tmp; 
        if (tmp > x) continue; 
        if (um.find(x-tmp) != um.end()) {
            cout << um[x-tmp]+1 << " " << i+1 << endl; 
            return 0; 
        } 
        um[tmp] = i; 
    }
    cout << "IMPOSSIBLE" << endl; 

}