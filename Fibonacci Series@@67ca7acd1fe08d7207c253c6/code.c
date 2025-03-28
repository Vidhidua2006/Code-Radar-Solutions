#include<stdio.h>
int fibonacciSeries(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int next,second=1;first=0;
    for(int i=0;i<=n;i++){
        next=first+second;
        first=second;
        second=next;
    }
    return next;

}