#include <iostream>
using namespace std;

int fib(int n) {
    if (n == 0 || n == 1) {
        return 1; 
    }

    int a = 1, b = 1;  
    int result;
    for (int i = 2; i <= n; i++) {
        result = a + b;  
        a = b;  
        b = result;
    }

    return result;
}

int main() {
    int N;
    cin >> N;

    cout << fib(N) << endl;
}
