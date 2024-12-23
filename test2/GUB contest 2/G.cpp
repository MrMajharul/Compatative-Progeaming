#include <iostream>
using namespace std;

int main()
{
	 int n;
    cin >> n;    
    for (int i = 1; i <= 12; i++) {
    cout<<n<<"*"<<i<<"="<<n*i <<"\n";
    }
}
/*
# Input: A number N (1 ≤ N ≤ 50)
N = int(input())

# Output: Multiplication table of N from 1 to 12
for i in range(1, 13):
    print(f"{N} * {i} = {N * i}")

 */