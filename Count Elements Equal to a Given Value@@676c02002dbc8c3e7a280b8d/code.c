#include<stdio.h>
int mian(){
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
    return 0;

}