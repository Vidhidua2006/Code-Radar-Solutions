#include<stdio.h>
int main(){
    int n,big;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //big=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
            printf("%d",&arr[i]);
            return 0;
        }
    }
}