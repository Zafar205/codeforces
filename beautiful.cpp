#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n==1){
        cout << 1;
        exit(0);
    }
    if(n<=3){
        cout << "NO SOLUTION \n";
        exit(0);
    }

    for(int i = 1; i<=n; ++i){
        if((i^1) == (i + 1)){
            cout << i << " ";
        }
    }
    for(int i = 1; i<=n; ++i){
        if( (i&1) == 1){
            cout << i << " ";
        }
    }
}