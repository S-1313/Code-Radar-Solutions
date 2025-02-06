#include <stdio.h>


int main() {
    int cp,sp;
    scanf("%d %d",&cp,&sp);
    int result = sp-cp;
    if (result>0){
        printf("Profit");
    }
    else if(result<0){
printf("Loss");
    
       }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}