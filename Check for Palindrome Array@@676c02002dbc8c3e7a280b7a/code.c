#include<stdio.h>
int main(){
    int n,R;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int original=arr[i];
        int reverse=0;
        int num=arr[i];
        
        while(num>0){
            R=num%10;
            reverse = reverse*10+R;
            num/=10;

        }
        if(original==reverse){
            printf("YES\n");
        }
        else{
            printf("NO");
        }
    }
    return 0;

}