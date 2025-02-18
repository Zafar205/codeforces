#include <bits/stdc++.h>
using namespace std;

int main(){
    int length, count{0};
    string s;
    cin >> length >> s;
    for (int i=0; i < length-1; ++i){
        if(s[i] == s[i+1]){
            ++count;
        }
    }
    cout << count << endl;
    return 0;
}