#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int arr[n][2];

    // Read input correctly
    for(int i = 0; i < n; ++i){
        cin >> arr[i][0] >> arr[i][1];
    }   

    int max_l{0}, max_r{0};
    
    // Print all pairs
    // for(int i = 0; i < n; ++i){
    //     cout << "(" << arr[i][0] << ", " << arr[i][1] << ") \n";
    // }


    int l_0 = 0 ; int l_1 = 0;

    for(int i = 0; i < n; ++i){
        if(arr[i][0]){
            ++l_1;
        }else {
            ++l_0;
        }
        
    }
    max_l = l_0 >= l_1 ? 0 : 1;

    
    int r_0 = 0 ; int r_1 = 0;
    for(int i = 0; i < n; ++i){
        if(arr[i][1]){
            ++r_1;
        }else {
            ++r_0;
        }
        
    }
    max_r = r_0 >= r_1 ? 0 : 1;
    
    // cout << max_l << ", " << max_r << "\n";

    int count(0);

    for(int i = 0; i < n; ++i){
        if(arr[i][0] != max_l ) ++count; 
        if(arr[i][1] != max_r) ++count;
    }

    cout <<count << "\n";
    return 0;
}
