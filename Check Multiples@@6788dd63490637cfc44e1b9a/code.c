#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    // Check if a is a multiple of b
    if (a % b == 0) {
        printf("Yes");
    } else {
        printf("No");
    }
     
    return 0;
}
