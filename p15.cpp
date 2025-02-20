#include <iostream>
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    if (x == 2 || x == 3) return true;
    if (x % 2 == 0 || x % 3 == 0) return false;
    
    for (int i = 5; i * i <= x; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) 
            return false;
    }
    return true;
}

int nextPrime(int x) {
    int next = x + 1;
    while (!isPrime(next)) {
        next++;
    }
    return next;
}

int main() {
    int n, m;
    cin >> n >> m;

    if (nextPrime(n) == m) 
        cout << "YES\n";
    else 
        cout << "NO\n";

    return 0;
}
