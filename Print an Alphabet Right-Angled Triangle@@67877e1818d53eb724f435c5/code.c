#include <stdio.h>

int main() {
    int a;
    scanf("%c",&a);
    switch(a){
        switch 1:
        {
            printf("A");
        }
        switch 2:
        {
            printf("A\n");
            printf("A B");
        }
        switch 3:
        {
            printf("A\n");
            printf("A B\n");
            printf("A B C\n");
        }
        switch 4:
        {
            printf("A\n");
            printf("A B\n");
            printf("A B C\n");
            printf("A B C D\n");
        }
        switch 5:
        {
            printf("A\n");
            printf("A B\n");
            printf("A B C\n");
            printf("A B C D\n");
            printf("A B C D E\n");
        }
        default{
            printf("Error");
        }
    }
    return 0;
}