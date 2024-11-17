#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int X, Y, R; // Inputs for each test case
        scanf("%d %d %d", &X, &Y, &R);
        
        int extraSticks = R / 30; // Calculate the extra sticks eaten
        int totalSticks = X + extraSticks; // Total sticks eaten
        int plates = (totalSticks + Y - 1) / Y; // Calculate plates (ceiling of totalSticks / Y)
        
        printf("%d\n", plates); // Output the result
    }
    
    return 0;
}
