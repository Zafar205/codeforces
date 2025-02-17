#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;

    if (s.find('1') == string::npos) {  
        cout << 0 << endl;
        return;
    }
    if (s.find('0') == string::npos) {  
        cout << 1 << endl;
        return;
    }

    int first = s.find('1');
    int last = s.rfind('1');

    if (first == last) {
        cout << 1 << endl;
        return;
    }

    int moves = count(s.begin() + first, s.begin() + last, '0');
    cout << moves + 2 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}