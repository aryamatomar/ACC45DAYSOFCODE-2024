#include <stdio.h>

int main() {
    int T; 
    if (scanf("%d", &T) != 1 || T <= 0) { 
        printf("Invalid input for number of test cases.\n");
        return 1; // Exit with error
    }

    while (T--) { 
        int n, x;
        if (scanf("%d %d", &n, &x) != 2 || n < 1 || x < 1) { 
            printf("Invalid input for n and x.\n");
            return 1; // Exit with error
        }

        int subscriptions = (n + 5) / 6;
        int cost = subscriptions * x; 

        printf("%d\n", cost); 
    }

    return 0; 
}
