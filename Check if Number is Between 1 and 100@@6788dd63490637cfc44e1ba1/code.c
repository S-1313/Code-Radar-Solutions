#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    
    // Check if 'a' is within the range of 0 to 100
    if (a >= 1 && a <= 100) {
        printf("In Range");
    } else {
        printf("Out of Range");
    }
    
    return 0;
}
