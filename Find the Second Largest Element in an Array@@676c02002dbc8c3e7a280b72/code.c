#include<stdio.h>
int main(){
    int n,big;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    big=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>big){
            big=arr[i]-i;
        }
        printf("%d",big);
    }
    return 0;
}