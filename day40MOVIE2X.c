#include <stdio.h>

int main() {
    int X, Y;
    
    
    scanf("%d %d", &X, &Y);
    
   
    int timeSpent = (Y / 2) + (X - Y);
    
   
    printf("%d\n", timeSpent);

    return 0;
}