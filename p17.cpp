#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    if (x <= 1 || x&1) {cout << -1 << endl; return 0;}
    int arr[x];
    for(int i = 0 ; i < x; ++i){
        arr[i] = i+1;
    }
    
    for(int i = 0 ; i < x-1; ++i){
        int random = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = random;
        ++i;

        
    }
    
    for(auto i : arr){
        cout << i << " " ;
    }
    return 0;
}