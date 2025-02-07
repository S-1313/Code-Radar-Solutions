#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    // Loop through the range from 0 to 100
    for (int n = 0; n <= 100; n++) {
        if (a == n) {
            printf("In Range");
            break;  // Exit the loop once the match is found
        }
    }

    // If no match is found (loop finishes without break)
    if (a < 0 || a > 100) {
        printf("Out of Range");
    }
    
    return 0;
}
