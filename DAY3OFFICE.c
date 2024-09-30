#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y;
        scanf("%d %d",&x,&y);

        if (y<x){
        int total=4*x+y;

        
        printf("%d\n", total);
        }
    }

    return 0;
}
