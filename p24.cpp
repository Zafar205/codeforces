#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    string input;
    cin >> input;
    vector<int> arr;
    for(int i= 0 ; i < input.length(); i+=2){
        int ele = stoi(string(1, input[i]));
        arr.push_back(ele);
    }

    sort(arr.begin(), arr.end());
    string res = "";
    for (size_t i = 0; i < arr.size(); i++)
    {
        /* code */
        res += to_string(arr[i]);
        res += '+';

        
    }
    res.pop_back();
    cout << res << "\n";
    return 0;
}