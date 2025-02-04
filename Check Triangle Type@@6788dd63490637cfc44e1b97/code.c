#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b+c==b<a+c==c<a+b){
        printf("Equilateral");
    }
    else if(a<b+c==b<a+c!=c<a+b){
        printf("Isosceles");
    }
    else if(a<b+c!=b<a+c!=c<a+b){
        printf("Scalene");
    }
    else{
        printf("Invalid");
    }
    return 0;
}