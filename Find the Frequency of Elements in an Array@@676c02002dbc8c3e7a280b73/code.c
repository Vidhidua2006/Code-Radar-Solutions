#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int visited[n];
    for(int i=0;i<n;i++){
        if(visited[i]==1){
            continue;
        }
    
     count=1;
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            count++;
            visited[j]=1;
        }
        printf("%d %d",arr[i],count);}
    }
    return 0;

}