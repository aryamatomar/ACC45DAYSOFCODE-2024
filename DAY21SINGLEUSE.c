#include <stdio.h>

int min_attacks(int H, int X, int Y) {
    // Calculate remaining health after using the special attack
    int remaining_health = H - Y;
    
    // Calculate attacks needed after using special attack
    int attacks_after_special = 0;
    if (remaining_health > 0) {
        attacks_after_special = (remaining_health + X - 1) / X; // Equivalent to ceil((H-Y) / X)
    }
    
    // Total attacks include the special attack and normal attacks needed
    return 1 + attacks_after_special;
}

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases
    
    while (T--) {
        int H, X, Y;
        scanf("%d %d %d", &H, &X, &Y); // Read H, X, Y for each test case
        
        int result = min_attacks(H, X, Y);
        printf("%d\n", result); // Output the result
    }
    
    return 0;
}