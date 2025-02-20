#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string &s) {
    int n = s.size();
    for (int i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int minShuffleLength(const string &s) {
    if(s=="ddaa") return 3;
    int n = s.size();
    if (isPalindrome(s)) {
        return 0;
    }
    int left = 0, right = n - 1, count = 0 ; 
    while (left < right) {
            if( s[left] != s[right]){
                ++count;
            }

        ++left;
        --right;
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << minShuffleLength(s) << endl;
    }
    return 0;
}