#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    while (n--) {
        int a;
        cin >> a;  
        int b = (a + 4) / 5; 
        cout << b << endl;
    }
}