#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    switch(a){
        case 1 1:
        {
            printf("A");
            break;
        }
        case 2:
        {
            printf("A\n");
            printf("A B");
            break;
        }
        case 3:
        {
            printf("A\n");
            printf("A B\n");
            printf("A B C\n");
            break;
        }
        case 4:
        {
            printf("A\n");
            printf("A B\n");
            printf("A B C\n");
            printf("A B C D\n");
            break;
        }
        case 5:
        {
            printf("A\n");
            printf("A B\n");
            printf("A B C\n");
            printf("A B C D\n");
            printf("A B C D E\n");
            break;
        }
        default{
            printf("Error");
            break;
        }
    }
    return 0;
}