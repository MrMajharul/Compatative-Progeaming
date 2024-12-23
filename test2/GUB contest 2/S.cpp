#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    for (int i = 0; i < a; ++i) {
        int N;
        cin >> N; 
        int sum = 0;
        while (N > 0) {
            sum += N % 10;
            N /= 10;
        }
        cout << sum << endl;  
    }

}
