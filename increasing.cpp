#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned int num;
    cin >> num;
    vector<unsigned int> elements;
    while(num--){
        unsigned int val;
        cin >> val;
        elements.push_back(val);
    }
    long unsigned int min_moves = 0;
    for (long unsigned int i = 1 ; i < elements.size() ; ++i){
        if (elements[i] < elements[i-1]){
            min_moves += elements[i-1]-elements[i];
            elements[i] += elements[i-1]-elements[i];
        }
    }

    cout << min_moves;
    // for(auto i : elements){
    //     cout << i << " ";
    // }

}