#include <stdio.h>
int main() {
    int a,b,s;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch(c){
        case'+':
        s=a+b;
        printf("%d",s);
        break;
        case'-':
        s=a-b;
        printf("%d",s);
        break;
        case'*':
        s=a*b;
        printf("%d",s);
        case'/':
        break;
        s=a/b;
        printf("%d",s);
        break;
    }
    return 0;
}