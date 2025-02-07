#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    for (int n = 1; n <= 10; n++) {
        if (a == b * n) {  // Use equality operator '=='
            printf("Yes");
            break;
        }
    }
    
    if (a != b * n) {  // Check outside the loop if no match was found
        printf("No");
    }
     
    return 0;
}
