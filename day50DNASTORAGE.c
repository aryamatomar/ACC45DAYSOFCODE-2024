#include <stdio.h>
#include <string.h>

void encodeBinaryToDNA(int n, char *binaryString) {
    for (int i = 0; i < n; i += 2) {
        if (binaryString[i] == '0' && binaryString[i + 1] == '0') {
            printf("A");
        } else if (binaryString[i] == '0' && binaryString[i + 1] == '1') {
            printf("T");
        } else if (binaryString[i] == '1' && binaryString[i + 1] == '0') {
            printf("C");
        } else if (binaryString[i] == '1' && binaryString[i + 1] == '1') {
            printf("G");
        }
    }
    printf("\n");
}

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);
        char binaryString[N + 1]; // To store the binary string (with null terminator)
        scanf("%s", binaryString);

        encodeBinaryToDNA(N, binaryString);
    }

    return 0;
}
