#include<stdio.h>
void isPrime(int n,int i){
    if(n%i==0){
        return isPrime;
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}