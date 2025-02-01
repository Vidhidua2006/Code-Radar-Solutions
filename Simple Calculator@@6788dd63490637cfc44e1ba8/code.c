#include <stdio.h>
int main() {
    int a,b;
    char ch;
    scanf("%d %d %c", &a,&b,&ch);
    if(c=='+'){
        printf("%d",a+b);
    }
    else if(c=='-'){
        printf("%d",a-b);
    }
    else if(c=='*'){
        printf("%d",a*b);
    }
    else if(c=='/'){
        if(b!=0){
            printf("%d",a/b);
        }
        else{
            printf("Not Valid");
        }
    }
    else{
        printf("error");
    }
    return 0;
}