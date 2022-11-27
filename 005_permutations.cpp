#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
#define ull unsigned long long
#define printd(x) printf("%d\n", x)
#define prints(x) printf("%s\n", x)
#define scand(x) scanf("%d", &x)
#define scans(x) scanf("%s", &x)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; 
    cin >> n;    
    if (n == 2 || n == 3 ) {
        cout << "NO SOLUTION" << endl; 
        return 0; 
    }
    for (int i = 2; i <= n; i+=2){
        cout << i << " "; 
    } 
    for (int i = 1; i <= n; i+=2){
        cout << i << " "; 
    }
    cout << endl; 
}
