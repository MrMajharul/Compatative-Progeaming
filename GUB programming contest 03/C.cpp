#include <iostream>
using namespace std;

void bubbleSort(int A[], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    bubbleSort(A, N);
    
    int distinctCount = 1; 
    for (int i = 1; i < N; i++) {
        if (A[i] != A[i - 1]) {
            distinctCount++; 
        }
    }
    cout << distinctCount << endl;
}
