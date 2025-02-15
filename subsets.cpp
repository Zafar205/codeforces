// C++ program to print all subsets
// of a given Set or Array
#include <iostream>
#include <vector>
using namespace std;

void subsetRecur(int i, vector<int>& arr, 
vector<vector<int>>& res, vector<int>& subset) {
    
    // add subset at end of array
    if (i == arr.size()) {
        res.push_back(subset);
        return;
    }
    
    // include the current value and 
    // recursively find all subsets
    subset.push_back(arr[i]);
    subsetRecur(i+1, arr, res, subset);
    
    // exclude the current value and 
    // recursively find all subsets.
    subset.pop_back();
    subsetRecur(i+1, arr, res, subset);
}

vector<vector<int> > subsets(vector<int>& arr) {
    vector<int> subset;
    vector<vector<int>> res;
    subsetRecur(0, arr, res, subset);
    return res;
}

int main() {
    vector<int> arr = { 1, 2, 3 };
    vector<vector<int> > res = subsets(arr);
    
    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++)
            cout << res[i][j] << " ";
        cout << endl;
    }

    return 0;
}
