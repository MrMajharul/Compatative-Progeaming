#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int route1 = a + b;
    int route2 = c + b;
    int route3 = a + c;
    int route4 = b + c;
    int route5 = c + a;
    int route6 = b + a;

    int minTime = route1; 
    if (route2 < minTime) minTime = route2;
    if (route3 < minTime) minTime = route3;
    if (route4 < minTime) minTime = route4;
    if (route5 < minTime) minTime = route5;
    if (route6 < minTime) minTime = route6;
    
    cout << minTime << endl;
}