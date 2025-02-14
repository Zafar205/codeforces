#include <iostream>
using namespace std;

int main(){

    

    int n, k, p(0), kth(0);
    cin >> n >> k;
    int arr[n];

    for(int i=0;  i<n; ++i){
        int s;
        cin >> s;
        arr[i] = s;
    }
    // for(auto& elem : arr){
    //     cout << elem << ", ";
    // }
    kth = arr[k-1];
        
    // cout<< endl << kth << ""<<endl;

    for(int i=0;  i<n; ++i){
        if(arr[i]>0 && arr[i]>=kth){
           ++p;
        }
    }
    cout << p << endl;
    return 0;
}