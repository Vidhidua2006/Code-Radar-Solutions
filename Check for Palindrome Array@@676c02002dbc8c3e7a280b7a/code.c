#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        R=n%10;
        reverse=reverse*10+R;
        n/=10;
    }
    if(arr[i]==reverse){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;

}