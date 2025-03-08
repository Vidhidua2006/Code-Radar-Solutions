#include<stdio.h>
int main(){
    int n,count_even=0,count_odd=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count_even++;
        }
        else{
            count_odd++;
        }
    }
    printf("%d",count_even);
    printf("%d",count_odd);
    return 0;
}