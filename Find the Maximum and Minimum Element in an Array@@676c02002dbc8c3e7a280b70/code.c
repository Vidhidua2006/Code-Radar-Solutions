#include<stdio.h>
#include<math.h>
int main(){
    int arr[],n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    minimum=min(arr[i]);
    maximum=max(arr[i]);
    printf("%d",min);
    printf("%d",max);
    return 0;
}