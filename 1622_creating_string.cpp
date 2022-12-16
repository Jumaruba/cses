#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include <string>
#include <unordered_set>
using namespace std;
#define ull unsigned long long
#define ul unsigned long

// CONTROL STRUCTURES
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FIR(i, a) for (int i=1; i<(a); i++)
#define all(vec)  vec.begin(),  vec.end()
#define ANMR cin.tie(0)->sync_with_stdio(0);

void solve(string s, unordered_set<string> &us, int pos, vector<string> &v){
    for(int i = pos; i < s.size(); i++){
        swap(s[i], s[pos]); 
        if (us.find(s) == us.end()) { 
            v.push_back(s);
            us.insert(s);
        }
        solve(s, us, pos+1, v);
        swap(s[i], s[pos]); 
    }
}

int main(){
    ANMR
    unordered_set<string> us; 
    vector<string> v; 
    string s;
    cin >> s;
    solve(s, us, 0, v); 
    sort(all(v));
    cout << v.size() << endl;
    F0R(i, v.size()){
        cout << v[i] << endl;
    }
}