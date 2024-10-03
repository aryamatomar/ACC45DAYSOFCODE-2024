#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        
        
        int scoreAfirst = (500 - 2 * X) + (1000 - 4 * (X + Y));
        
       
        int scoreBfirst = (1000 - 4 * Y) + (500 - 2 * (X + Y));
        
        
        int maxScore = scoreAfirst > scoreBfirst ? scoreAfirst : scoreBfirst;
        
        printf("%d\n", maxScore);
    }
    
    return 0;
}