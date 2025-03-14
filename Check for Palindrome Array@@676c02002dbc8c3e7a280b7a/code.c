#include<stdio.h>
int main(){
    int n,R;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int isPalidrome=1;
    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-i-1]){
            isPalidrome=0;
            break;
        }
    }
        if(isPalidrome){
            printf("YES\n");
        }
        else{
            printf("NO");
        }
    }
    return 0;

}