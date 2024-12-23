#include <stdio.h>

#define MAX_SIZE 1000
#define MAX_VALUE 1000000

int main() {
    int n, a[MAX_SIZE], freq[MAX_VALUE + 1] = {0};
   
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        freq[a[i]]++;  
    }
    
    int max_size = 0;
    for (int i = 0; i <= MAX_VALUE; i++) {
        if (freq[i] > max_size) {
            max_size = freq[i];
        }
    }
    printf("%d\n", max_size);
    
    return 0;
}
