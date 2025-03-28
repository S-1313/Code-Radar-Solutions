int isPrime(){
    
    if (t<=1){
        isPrime=0;
    }
    else{
        for(int i=2;i*i<=a;i++){
            if (t%i==0){
                isPrime=0;
                break;
            }
        }
    }
}