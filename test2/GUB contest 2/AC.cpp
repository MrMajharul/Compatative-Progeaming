#include <iostream>
using namespace std;

void draw(int n) {
    for (int i = 1; i <= (n / 2) + 1; ++i) {
    
        cout << string(i, '*') << endl;
    }
    
    for (int i = n / 2; i >= 1; --i) {
       
        cout << string(i, '*') << endl;
    }
}

int main() {
    int n;
    cin >> n;
    draw(n);
    
    return 0;
}
