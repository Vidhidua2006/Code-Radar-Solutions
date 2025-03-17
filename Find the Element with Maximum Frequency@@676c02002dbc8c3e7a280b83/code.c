#include<stdio.h>
int main(){
    int n,visited[i];
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    for(int i=0;i<n;i++){
        if(visited[i]==arr[i]);
        visited[i]=arr[i];
    }
    for(int j=0;j<i;j++){
        if(arr[i]==arr[j]){
            visited[i]=arr[j];
        }
    }
    printf("%d",arr[j]);
    return 0;

}