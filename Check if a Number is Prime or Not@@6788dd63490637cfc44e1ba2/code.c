#include <stdio.h>
int main() {
    int a,a>=1;
    scanf("%d",&a);
    if(a%2!=0){
        printf("Prime");
    }
    else if(a==2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}