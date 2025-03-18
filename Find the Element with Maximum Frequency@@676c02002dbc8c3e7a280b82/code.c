#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int visited[n];
    for(int i=0;i<n;i++){
        visited[i]=-1;
    }
    int maxele=arr[0];
    int maxfreq=0;
    for(int i=0;i<n;i++){
        if(visited[i]==-1){
        int count=1;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                visited[j]=0;
            }
        } 
        
        if(count>maxele){
            count=maxfreq;
            maxele=arr[i];

        }
        }
    }
    printf("%d",maxele);
    return 0;

}