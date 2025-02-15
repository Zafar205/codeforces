#include <iostream>
#include <cmath> // For abs()
using namespace std;

int main() {
    int x = 0, y = 0, a;
    
    for(int i = 0; i < 25; ++i) {
        cin >> a;

        if (a == 1) {
            // cout << "Found 1 at: (" << y << ", " << x << ")" << endl;
            break;
        }

        ++x;
        if (x == 5) { 
            x = 0; 
            ++y;
        }
    }

    int distance = abs(2 - y) + abs(2 - x);
    cout  << distance << endl;

    return 0;
}
