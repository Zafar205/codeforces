#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int val = 0;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        if (s.find("++") != string::npos) { 
            ++val;
        } else {
            --val;
        }
    }
    cout << val;
    return 0;
}
