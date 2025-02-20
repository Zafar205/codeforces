#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string x,y,ans{""};
    cin >> x >> y;
    for(int i=0 ; i < x.size(); ++i){
        if(x[i]!=y[i]) {
            ans += "1";
        }
        else {
            ans += "0";
        }

        
    }
    cout << ans << '\n';
    return 0; 
}