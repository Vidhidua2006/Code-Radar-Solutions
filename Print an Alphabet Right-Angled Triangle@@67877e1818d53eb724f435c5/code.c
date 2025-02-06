#include <stdio.h>

int main() {
    int a;
    scanf("%c",&a);
    switch(a){
        switch 1:
        {
            printf("A");
            break;
        }
        switch 2:
        {
            printf("A\n");
            printf("A B");
            break;
        }
        switch 3:
        {
            printf("A\n");
            printf("A B\n");
            printf("A B C\n");
            break;
        }
        switch 4:
        {
            printf("A\n");
            printf("A B\n");
            printf("A B C\n");
            printf("A B C D\n");
            break;
        }
        switch 5:
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