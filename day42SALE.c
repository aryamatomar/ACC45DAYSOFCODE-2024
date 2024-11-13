#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 

    while(T--) {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);

        
        int total_price = A + B + C;
        int min_price = A;

        
        if (B < min_price) min_price = B;
        if (C < min_price) min_price = C;

      
        int amount_to_pay = total_price - min_price;

        printf("%d\n", amount_to_pay);
    }

    return 0;
}