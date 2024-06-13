#include <iostream>
#include <cstring>
#include <vector>
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


/*

        0 1 2 3 4 5 6 7 8 9 10
0       0 0 0 0 0 0 0 0 0 0 0 
1(5,4)  0 0 0 0 5 5 5 5 5 5 5 
2(12,8) 0 0 
3(8,5)
4(1,3)


*/
int main(){
    ANMR

    int n, x; 
    cin >> n >> x; 
    vector<int> w(n,0); 
    vector<int> v(n,0);

    FOR(n) cin >> w[i]; 
    FOR(n) cin >> v[i]; 

    vector<vector<int>> M(n+1, vector<int>(x+1,0));

    for (size_t i = 1; i < n+1; i++) {
        for (size_t j = 1; j < x+1; j++) {
            if (j>=w[i-1]) {
                M[i][j] = max(M[i-1][j], M[i-1][j-w[i-1]] + v[i-1]);
            } else M[i][j] = M[i-1][j];
        }
    }

    cout << M[n][x] << endl; 
    

}