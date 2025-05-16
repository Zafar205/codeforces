#include <bits/stdc++.h>
using namespace std;


int main(){
    string sequence;
    cin >> sequence;
    int len = sequence.size();
    int i = 0;

    int count = 0;
    int max_count = 0;
    while(i < len){
        if(sequence[i]==sequence[i+1]){
            ++count;
            max_count = max(max_count, count);
        }else{
            max_count = max(max_count, count);
            count = 0;
        }
        ++i;
        
    }

    cout << max_count+1;



}