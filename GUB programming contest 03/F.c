#include <stdio.h>

int main() {
    int n;
    long long sum = 0; 
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        sum += num;
    }
    printf("%lld\n", sum);
    
    return 0;
}
