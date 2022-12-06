#include<iostream>
#include<algorithm>
#include <cstring> 
using namespace std;
#define ull unsigned long long
#define ul unsigned long

// CONTROL STRUCTURES
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FIR(i, a) for (int i=1; i<(a); i++)
#define all(vec)  vec.begin(),  vec.end()
#define ANMR cin.tie(0)->sync_with_stdio(0);

void solve(string s){
    int arr[26]; 
    memset(arr, 0, sizeof(int)*26);
    short a = -1; 
    string res = ""; 

    for (char c : s) arr[c-'A']++; 

    //If it's possible
    F0R(i, 26){
        if (a != -1 && arr[i] % 2 == 1) {
            cout << "NO SOLUTION" << endl; 
            return; 
        } else if (a == -1 && arr[i] % 2 == 1) {
            a = i; 
        } 
    }

    F0R(i, 26){
        if (arr[i] != 0) {
            res += string(arr[i]/2, 'A'+(char)i);
        }
    }
    if (a != -1) res += 'A' + (char) a; 
    for (int i = 25; i >= 0; i--){
        res += string(arr[i]/2, 'A' + (char)i);
    }

    
    cout << res << endl; 
}
int main(){
    ANMR
    string t;
    cin >> t;
    solve(t);

}