#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;
#define ull unsigned long long
#define ul unsigned long
#define ll long long int

// CONTROL STRUCTURES
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FIR(i, a) for (int i=1; i<(a); i++)
#define all(vec)  vec.begin(),  vec.end()
#define ANMR cin.tie(0)->sync_with_stdio(0);


int main(){
    ANMR
    ll i;
    cin >> i;
    for (long long t = 1 ; t < i +1; t++) cout << (t* t) * (t* t -1)/(long)2 - (long)4*(t-2)*(t-1) << endl; 
}