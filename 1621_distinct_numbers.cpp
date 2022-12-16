#include <algorithm>
#include <cstring>
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
#define ull unsigned long long
#define ul unsigned long

// CONTROL STRUCTURES
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define FIR(i, a) for (int i = 1; i < (a); i++)
#define all(vec) vec.begin(), vec.end()
#define ANMR cin.tie(0)->sync_with_stdio(0);

void solve(int t) {
    unordered_set<int> map = {};
    int aux, total = 0;
    F0R(i, t) {
        cin >> aux;
        if (map.find(aux) == map.end()) {
            map.insert(aux);
            total++;
        }  
    }
    cout << total << endl;
}
int main() {
    ANMR int t;
    cin >> t;
    solve(t);
}