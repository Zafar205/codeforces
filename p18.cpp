#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Find the indices of the maximum and minimum height
    int max_index = -1, min_index = -1;
    int max_height = -1, min_height = 101;

    for (int i = 0; i < n; ++i) {
        if (arr[i] > max_height) {
            max_height = arr[i];
            max_index = i;
        }
        if (arr[i] <= min_height) {
            min_height = arr[i];
            min_index = i;
        }
    }

    // Calculate the minimum swaps needed
    int swaps = max_index + (n - 1 - min_index);
    if (max_index > min_index) {
        swaps--; // The soldiers will cross each other, so adjust
    }

    cout << swaps << endl;



    
    return 0;
}
