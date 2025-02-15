#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x(0), y(0), z(0);
    while(n--){
        int a, b, c;
        cin >> a >> b >> c;
        x += a; y += b, z += c;
        cout << x << ", " << y << ", " << z<< endl;
    }

    string s = (x == 0 && y == 0 && z == 0) ? "YES" : "NO";
    cout << s << endl;
    return 0;
}