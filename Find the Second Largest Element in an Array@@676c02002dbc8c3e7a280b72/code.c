#include<stdio.h>
int main(){
    int n,big,secondbig;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    big=secondbig=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>big){
            secondbig=big;
            big=arr[i];
        }
        else if(arr[i]>secondbig&&arr[i]<big){
            secondbig=arr[i];
        }
        printf("%d",secondbig);
    }
    return 0;
}