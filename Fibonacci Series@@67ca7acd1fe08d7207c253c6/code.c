#include<stdio.h>
void fibonacciSeries(int n){
   
    if(n==1){
        printf("%d ",0);
    }

    int next,second=1,first=0;
    for(int i=2;i<n;i++){
        next=first+second;
        first=second;
        printf("%d ",second);
        second=next;
    }
    
}
// int main(){
//     int n;
//     scanf("%d",&n);
//     if(n<0){
//         printf("Invalid input \n");
//         return 0;
//     }
//     fibonacciSeries(n);
//     return 0;
// }