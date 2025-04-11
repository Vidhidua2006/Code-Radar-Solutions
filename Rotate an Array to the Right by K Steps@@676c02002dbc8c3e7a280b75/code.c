#include<stdio.h>
int main(){
    int n,R,reverse,;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int p;
    scanf("%d",&p);
    for(int i=0;i<n;i++){
        for(int j=n;j>0;j++){
            R=a[j]%10;
            reverse=reverse*10+R;
            a[j]/=10;
        }
        printf("%d",a[i]);
    }
    for(int j=)

}