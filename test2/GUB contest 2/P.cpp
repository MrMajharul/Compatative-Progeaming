#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    for (int a= 100; a <= 999; a++) {
        int hundrt =a / 100;
        int ten = (a / 10) % 10;
        int one=a% 10;
        
        if (hundrt + ten+ one == n) {
            count++;
            cout << a << endl;
        }
    }
   
    cout << count << endl;

}

/*
n = int(input())

results = []

# all three-digit numbers (100 to 999)
for num in range(100, 1000):
    digit_sum = sum(int(digit) for digit in str(num))
    # Check if the sum matches n
    if digit_sum == n:
        results.append(num)

print(len(results))
for number in results:
    print(number)
*/