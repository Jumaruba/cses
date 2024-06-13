#include <iostream>
#include<algorithm>
#include <climits>
#include<cstring>
#include<vector>

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

    if (c_i >= j)  min(M[i-1][j-c_i]+1, M[i-1][j] == 0? MAX_INT: M[i-1][j])
    else M[i-1][j]
    0 1 2 3 4 5 6 7 8 9 10 11
 0  0 0 0 0 0 0 0 0 0 0 0  0 
 2  0 0 1 0 2 0 3 0 4 0 5  0  
 5  0 0 1 0 2 1 3 2 4 3 2  0
 7  0 0 1 0 2 1 3 1 4 2 2  3 
*/


int main(){
    ANMR
    int n, x;
    cin >> n >> x;
    int arr[n];
    memset(arr, 0, sizeof(arr));
    FOR(n) cin >> arr[i]; 

    vector<vector<int>> M (n+1, vector<int>(x+1, 0)); 
    int c_i; 
    sort(arr, arr+n); 
    FIR(n+1){
        c_i = arr[i-1]; 
        for (int j = 1; j < x+1; j++) {
            if (c_i <= j) {
                if (j%c_i == 0) M[i][j] = j/c_i; 
                else if (M[i-1][j] == 0 && M[i][j-c_i] == 0) M[i][j] = 0; 
                else if (M[i-1][j] != 0 && M[i][j-c_i] == 0) M[i][j] = M[i-1][j];
                else if (M[i-1][j] == 0 && M[i][j-c_i] != 0) M[i][j] = M[i][j-c_i]+1;
                else M[i][j] = min(M[i-1][j], M[i][j-c_i]+1);
            }
            else M[i][j] = M[i-1][j];
        }
    }
    int ans = M[n][x] == 0? -1: M[n][x] ;
    cout << ans << endl;


}