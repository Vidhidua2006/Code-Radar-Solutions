#include<stdio.h>
void fibonacciSeries(int n){
    printf("%d ",0);
    int first=0,second=1,next;
    for(int i=2;i<=n;i++){
        next=first+second;
        first=second;
        printf("%d ",second);
        second=next;
    }
    
}