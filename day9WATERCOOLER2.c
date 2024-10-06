#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        long long X, Y;
        scanf("%lld %lld", &X, &Y); 

        
        long long m = (Y - 1) / X; 

        printf("%lld\n", m); 
    }

    return 0;
}