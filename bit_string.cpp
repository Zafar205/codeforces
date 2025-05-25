#include <bits/stdc++.h>
using namespace std;

int main(){
    const long long mod_val = 1e9 + 7;
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    long long x = 1;
    for(auto i = 0 ; i < n; ++i){
        x= x*2;
        x=x%mod_val;
    }
    cout << x ;
}