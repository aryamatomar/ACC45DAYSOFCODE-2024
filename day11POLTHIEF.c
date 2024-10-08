#include <stdio.h>
#include <stdlib.h> 

int main() {
    int T; 
    scanf("%d", &T);

    while (T--) { 
        int X, Y; 
        scanf("%d %d", &X, &Y); 

        int time_to_catch = abs(X - Y);
       
        printf("%d\n", time_to_catch);
    }

    return 0;
}