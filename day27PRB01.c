#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_N 100000

int main() {
    int t, n;
    bool prime[MAX_N + 1];
    
    
    memset(prime, true, sizeof(prime));
    prime[1] = false; // 1 is not a prime number

    // Sieve of Eratosthenes to find all prime numbers up to MAX_N
    for (int p = 2; p * p <= MAX_N; p++) {
        if (prime[p] == true) {
            for (int i = 2 * p; i <= MAX_N; i += p)
                prime[i] = false;
        }
    }

    // Read number of test cases
    scanf("%d", &t);
    while (t--) {
        // Read the number to check for primality
        scanf("%d", &n);
        
        // Output the result
        if (prime[n])
            printf("yes\n");
        else
            printf("no\n");
    }
    
    return 0;
}