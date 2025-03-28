#include<stdio.h>
int fibonacciSeries(int n,int next,int first,int second ){
    while(n>0){
        next=first+second;
        first=second;
        second=next;
        return next;
    }
}