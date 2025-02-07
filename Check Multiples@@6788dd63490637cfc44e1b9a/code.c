#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    for (int n=1;n<=10;n++){
        if (a==b*n){
            
            printf("Yes");
            break;
        }
    }


    if(a!=b*n){
        printf("No");

    }
     
    return 0;
}