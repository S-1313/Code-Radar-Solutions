#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    for (int n=1;n<=10;n++){
        if (a=b*n){
            break;
            printf("Yes");
        }

        else{
            printf("No");
        }
    }
     
    return 0;
}