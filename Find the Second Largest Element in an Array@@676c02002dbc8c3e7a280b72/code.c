#include<stdio.h>
#include<limits.h>

int main(){
    int n,big,secondbig;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    big =INT_MIN, secondbig=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>big){
            secondbig=big;
            big=arr[i];
        }
        else if(arr[i]>secondbig&& arr[i]!=big){
            secondbig=arr[i];
        }
    }
    if (secondLargest == INT_MIN) {
        printf("No second largest element\n");
    } else {
        printf("The second largest element is: %d\n", secondLargest);
    }

    return 0;
}