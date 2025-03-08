#include<stdio.h>
void isPrime(int n,int i){
    if(n<2){
        return 0;
    }
    for(i=2;i*i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1
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