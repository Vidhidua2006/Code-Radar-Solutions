#include <stdio.h>

void swap(int *a,int *b){
    *a= *a ^ *b;
    *b= *b ^ *a;
}

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    swap(&x,&y);
    printf("%d %d",x,y);
    return 0;
}