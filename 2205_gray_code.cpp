#include<iostream>
#include<cstring>
#include<algorithm>
#include <vector>
using namespace std;
#define ull unsigned long long
#define ul unsigned long

// CONTROL STRUCTURES
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FIR(i, a) for (int i=1; i<(a); i++)
#define all(vec)  vec.begin(),  vec.end()
#define ANMR cin.tie(0)->sync_with_stdio(0);

void solve(vector<string> &v, int &t, int & vsize){
    if (vsize == t ){
        for (string b: v) cout << b << endl; 
        return; 

    }
    vector<string> r(v); 
    reverse(r.begin(), r.end()); 
    v.insert(v.begin(), r.begin(), r.end());
    vsize++;
    for (int i= 0 ; i < v.size()/2; i++) v[i] = "0" + v[i]; 
    for (int i= v.size()/2 ; i < v.size(); i++) v[i] = "1" + v[i]; 
    solve(v, t, vsize);

}

int main(){
    ANMR
    int t;
    cin >> t;
    string input = ""; 
    F0R(i, t) input+= "0"; 
    int vsize = 1;
    vector<string> v = {"0", "1"}; 
    solve(v,t, vsize);

}