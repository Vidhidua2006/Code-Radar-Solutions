#include<stdio.h>
int main(){
    int n,p;
    scanf("%d %d",&n,&p);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(p==a[i]){
            count++;
        }
    }
    printf("%d",count);
    return 0;

}