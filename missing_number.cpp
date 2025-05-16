#include <bits/stdc++.h>
using namespace std;


int main(){
    int num;
    cin >> num;
    int arr[num+1];

    int n = num-1;


    while(n--){
        int val;
        cin >> val;
        arr[val] = 1;
    }


    for(int i=1 ; i<num+1 ; ++i){
        if(arr[i]!=1){
            cout<<i;
            break;
        }
    }


}