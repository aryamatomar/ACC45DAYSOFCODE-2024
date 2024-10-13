#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T); 

   
    for (int i = 0; i < T; i++) {
        int N; 
        scanf("%d", &N); 

        
        int notebooks = 10 * N;

        
        printf("%d\n", notebooks);
    }

    return 0;
}