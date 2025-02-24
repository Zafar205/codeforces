// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int n, counter(0);
//     cin >> n;
//     vector<int> arr;


//     for(int  i = 0 ; i < n ; ++i){
//         int element;
//         cin >> element;
//         if (count(arr.begin(), arr.end(), element) ){
//             continue;
//         }else {
//         arr.push_back(element);
        
//         int val = arr[i];

//         if(arr.size() == 1) {
//             continue ; 
//         }else{
            
//             int max = *max_element(arr.begin(), arr.end());
//             int min = *min_element(arr.begin(), arr.end());
//             if(max == val) ++counter;
//             if(min == val) ++counter;
//         }

//     }
//     } 

//     cout << counter << '\n';

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> scores(n);
    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }

    int counter = 0;
    int maxScore = scores[0], minScore = scores[0];

    for (int i = 1; i < n; ++i) {  // Start from second contest
        if (scores[i] > maxScore) {
            maxScore = scores[i];
            ++counter;
        } else if (scores[i] < minScore) {
            minScore = scores[i];
            ++counter;
        }
    }

    cout << counter << '\n';
    return 0;
}
