#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n]; 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int f[n+1] = {0}; 
    for (int i = 0; i < n; i++) {
        f[a[i]]++;
    }
    for (int i = 1; i <= n; i++) {
        cout << i << ": " << f[i] << endl;  
    }
}
