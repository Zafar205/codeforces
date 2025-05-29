#include <iostream>
#include <string>
using namespace std;
 
void func(string s) {
    if (s.size() <= 10) {  // Should be <= 10 (not < 10)
        cout << s << "\n"; // Print word and move to new line
    } else {
        cout << s.front() << s.size() - 2 << s.back() << "\n";  // Use .front() and .back()
    }
}


int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        func(s);
    }
    return 0;
}
