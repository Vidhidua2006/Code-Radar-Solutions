#include<stdio.h>
int main(){
    int n,R;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int orignal=arr[i];
        int reverse=0;
        int n=arr[i];
    }
    while(n>0){
        R=n%10;
        reverse = reverse*10+R;
        n/=10;

    }
    if(original==reverse){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;

}