#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
#define ull unsigned long long
#define ul unsigned long

// CONTROL STRUCTURES
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FIR(i, a) for (int i=1; i<(a); i++)
#define all(vec)  vec.begin(),  vec.end()
#define ANMR cin.tie(0)->sync_with_stdio(0);

// currVal = 10 -> 100; (100-10)*2 => (currNum - currNum/10)*step
void addBlocks(ull target, ull& step, ull& currVal, ull& currNum){
    while(currVal + (currNum*10 - currNum)*step < target){
        currVal += (currNum*10 - currNum)*step;
        currNum *= 10;
        step ++;
    }
}

// currNum = 10, currVal = 10, target = 14, (target-currVal)/step = incs
void addSubBlock(ull target, ull&step, ull&currVal, ull& currNum){
    ull inc = (target-currVal)/step; 
    ull dist = (target-currVal)%step;
    currNum += inc; 
    char f = to_string(currNum)[dist] ;
    cout << f << endl;

}
void solve(ull target, ull& step, ull& currVal, ull& currNum){
    addBlocks(target, step, currVal, currNum); 
    addSubBlock(target, step, currVal, currNum);

}

int main(){
    ANMR
    int t;
    cin >> t;
    while (t--) {
        ull target; 
        cin >> target; 
        ull currVal = 1, value = 1, step = 1, currNum = 1; 
        solve(target, step, currVal, currNum);
    }

}