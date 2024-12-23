#include <iostream>
using namespace std;

int sodasDrank(int a, int b, int c) {
    int totalBottles = a + b;
    int sodasDrank = 0;

    while (totalBottles >= c) {
        int newSodas = totalBottles / c;       
        sodasDrank += newSodas;               
        totalBottles = newSodas + (totalBottles % c);
    }

    return sodasDrank;
}

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    int result = sodasDrank(a, b, c);
    cout << result << endl;

}
