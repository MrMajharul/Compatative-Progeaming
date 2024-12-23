#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= 1000; ++i) {
        int temp = i;
        int isLucky = 1; 

        while (temp > 0) {
            int digit = temp % 10;
            if (digit != 4 && digit != 7) {
                isLucky = 0; 
                break;
            }
            temp /= 10;
        }

        if (isLucky && n % i == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
