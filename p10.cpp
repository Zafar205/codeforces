// #include <bits/stdc++.h>
// using namespace std;

// void lenny_board(int j, int i, int x, int  (&arr)[3][3]){
//     for(int a=0 ; a < x; ++a){
//         // for(int b=0 ; b < 3; ++b){
//             arr[j][i] =  arr[j][i] == 1 ? 0 : 1;

//             if(i-1 >=0 ) {arr[j][i-1] =  arr[j][i] == 1 ? 0 : 1; cout << "i-1" <<endl;}
//             if(i+1 <= 2) {arr[j][i+1] =  arr[j][i] == 1 ? 0 : 1; cout << "i+1" <<endl;}
//             if(j-1 >=0 ) {arr[j-1][i] =  arr[j][i] == 1 ? 0 : 1; cout << "j-1" <<endl;}
//             if(j+1 <= 2) {arr[j+1][i] =  arr[j][i] == 1 ? 0 : 1; cout << "j+1" <<endl;}
//         // }
//     }
// }

// void print_arr(int (&arr)[3][3]){
//     cout <<endl;
//     for(int i=0; i < 3; ++i){
//         for(int j=0; j < 3; ++j){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl ;
//     }
// }

// int main(){
//     int arr[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
//     int n(9), i(0), j(0), x;
//     while(n--){
//         cin>>x;
//         // cout << j << ", "<< i <<endl;
//         if(x>0){
//             lenny_board(j, i, x, arr);
//         }

//         ++i;
//         if(i%3==0){
//             ++j;
//             i = 0;
//         }

//     }

//     print_arr(arr);


//     return 0;
// }


//previous

#include <iostream>
using namespace std;

int main() {
    int grid[3][3]; // Stores the number of presses
    int result[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}}; // Initially all lights are ON (1)

    // Input grid
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> grid[i][j];
        }
    }

    // Compute the final state based on press count
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int toggle_count = grid[i][j]; // The times this light is pressed
            if (i > 0) toggle_count += grid[i - 1][j]; // Above
            if (i < 2) toggle_count += grid[i + 1][j]; // Below
            if (j > 0) toggle_count += grid[i][j - 1]; // Left
            if (j < 2) toggle_count += grid[i][j + 1]; // Right

            // If toggle_count is odd, light is OFF (0), else it's ON (1)
            result[i][j] = (toggle_count % 2 == 0) ? 1 : 0;
        }
    }

    // Output final grid state
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << result[i][j];
        }
        cout << endl;
    }

    return 0;
}


