#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios_base::sync_with_stdio(false);
    ll n;
    cin >> n;
    ll total_sum = (n*(n+1))/2;
    if(!(total_sum&1)){

        vector<ll> set1;
        vector<ll> set2;

        if(!(n&1)){
    
                for (int i = 0;  i < n/2; ++i){
                    if(!(i&1)){
                        set1.push_back(i+1ll);
                        set1.push_back(n-i);
                    }else{
                        set2.push_back(i+1ll);
                        set2.push_back(n-i);
                    }
                        
                }

        }else{

            for (int i = 0;  i < (n-1)/2; ++i){
                    if(!(i&1)){
                        set1.push_back(i+1ll);
                        set1.push_back(n-i-1);
                    }else{
                        set2.push_back(i+1ll);
                        set2.push_back(n-i-1ll);
                    }
                        
                }
            
                if(set1.size() > set2.size()){
                    set2.push_back(n);
                }else{
                    set1.push_back(n);
                }


        }
        cout << "YES" << "\n";
        cout << set1.size() << "\n";
        for(ll i = 0; i < set1.size() ; i++){
            cout << set1[i] << " ";
        }
        cout << "\n";

        cout << set2.size() << "\n";
        for(ll i = 0; i < set2.size() ; i++){
            cout << set2[i] << " ";
        }
        cout << "\n";
        
    }else{
        cout << "NO" << "\n";
    }
}
