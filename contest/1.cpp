#include <bits/stdc++.h>
using namespace std;

// int main(){
//     ios::sync_with_stdio(false); cin.tie(0);
//     int n;
//     cin >> n;
//     while(n--){
//         int n, k , p;
//         cin >> n >> k >> p;
//         if(k == 0){
//             cout << 0 << '\n';
//         }else if ( k + p == 0){
//             cout << 1 << '\n';
//         }else if ( p > n) {
//             cout << -1 << '\n';
//         }else if ( p ==1 && k > n){
//             cout << -1 << '\n';
//         }else {
//                 if (k < 0) k = -k;
//                 cout << (k + p - 1) / p<< '\n';
//             // cout << n  << k << p << '\n';
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k, p;
        cin >> n >> k >> p;
        
        int abs_k = abs(k);
    
        if (k == 0) {
            cout << 0 << '\n';
            continue;
        }
        
        // If |k| > n*p, impossible to achieve the sum
        if (abs_k > n * p) {
            cout << -1 << '\n';
            continue;
        }
        
        int operations = (abs_k + p - 1) / p; // Ceiling division
        cout << operations << '\n';
    }
    return 0;
}