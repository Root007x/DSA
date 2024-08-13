#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int total_xor = 0;
    for (int i = 1; i <= n; i++) {
        total_xor ^= i;
    }
    int given_xor = 0;
    for (int i = 0; i < n - 1; i++) {
        int num;
        scanf("%d", &num);
        given_xor ^= num;
    }
    int missing_number = total_xor ^ given_xor;
    printf("%d\n", missing_number);
    return 0;
}


