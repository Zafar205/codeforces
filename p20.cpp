#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    int n, x = 0, random;
    cin >> n;
    
    int original_n = n;  // Store original value of n

    while (n--) {
        cin >> random;
        x += random;
    }

    double result = (double)x / (100 * original_n);  // Use original_n to avoid division by zero
    cout << fixed << setprecision(12) << result*100 << '\n';

    return 0;
}
