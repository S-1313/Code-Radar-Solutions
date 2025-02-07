#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    for (int n=0;n<=100;n++){
        if (a==n){
            printf("In Range");
        }
        else{
            printf("Out of Range");
        }
    }
    return 0;
    
}