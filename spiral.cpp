#include <iostream>
using namespace std;
typedef long long ll;

void valueat(ll r, ll c){

    if (r==c){
        cout << r*r - (r-1) << "\n" ;
    }else{
        ll val = max(r, c);
        val = val*val - (val-1);

        if(c>r){
            if(c%2 == 0){
                val -= (c-r);
            }else{
                val += (c-r);
            }
        }else{
            if(r%2 == 0){
                val += (r-c);
            }else{
                val -= (r-c);
            }
        }
        cout << val << "\n";
    }

    

}

int main(){
    ios_base::sync_with_stdio(false);
    int num;
    cin >> num;

    while(num--){
        ll x, y;
        cin >> x >> y;
        valueat(x,y);
    }

}