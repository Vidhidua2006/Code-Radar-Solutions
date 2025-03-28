#include<stdio.h>
void printPrimesInRange(int a,int b, int isPrime=1){
    if(a<1){
        return 0;
    }
    for(int i=a;i<=b,i++){
        if(a%i==0){
            return isPrime =0;
        }
    }
    return isPrime =1;
    printf("%d",isPrime);
}