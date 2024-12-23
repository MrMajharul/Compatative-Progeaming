#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <1 || n > 99) {
        return 0;  
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || j == n - i - 1) {
                cout << "* ";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    
}