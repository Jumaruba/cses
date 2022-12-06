#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector> 
using namespace std;
#define ull unsigned long long      // 0 to 0 to 18,446,744,073,709,551,615
#define ll long long                // -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
#define ul unsigned long            // 0 to 4,294,967,295

// CONTROL STRUCTURES
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FIR(i, a) for (int i=1; i<(a); i++)
#define all(vec)  vec.begin(),  vec.end()
#define ANMR cin.tie(0)->sync_with_stdio(0);

ll solve(vector<ll> &vec, ll v1, ll v2, int start){
    if (start == vec.size()){
        return abs(v1-v2); 
    }
    ll res1 = solve(vec, v1+vec[start], v2, start+1);
    ll res2 = solve(vec, v1, v2+vec[start],start+1);
    return min(res1, res2);
}

int main(){
    ANMR
    short int t;
    ull p; 
    ll v1 = 0, v2; 
    cin >> t;
    vector<ll> vec; 
    while (t--) {
        cin >> p; 
        vec.push_back(p); 
    }
    ll res = solve(vec, v1,v2,0);
    cout << res << endl;

}