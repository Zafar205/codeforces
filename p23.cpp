#include <bits/stdc++.h>
using namespace std;

// we need to keep track of passengers in train at every stop and return the max
int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n;
    cin >> n;
    int passengers(0), passengers_in_train(0);
    while(n--){
        int enter, exit;
        cin >> exit>> enter ;
        passengers_in_train += enter - exit;
        if(passengers_in_train > passengers){
            passengers = passengers_in_train;
        }
    }
    cout << passengers << '\n';
    return 0;
}