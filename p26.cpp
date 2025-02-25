#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    set<char> my_set(s.begin(), s.end());
    string result = (my_set.size() & 1) ? "IGNORE HIM!"  : "CHAT WITH HER!";
    cout << result << '\n';
    return 0; 
}