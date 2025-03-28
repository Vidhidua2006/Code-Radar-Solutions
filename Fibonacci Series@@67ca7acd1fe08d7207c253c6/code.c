#include<stdio.h>
int fibonacciSeries(int num,int next,int first,int second ){
    while(num>0){
        next=first+second;
        first=second;
        second=next;
        return next;
    }
}