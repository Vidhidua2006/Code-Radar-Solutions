#include <stdio.h>

int main() {
    int a;
    char c;
    scanf("%d", &a);  
    if(c<=A&&c>=Z){
        for(int i=1;i<=a;i++){
            for(int j=0;j<=i;j++){
                printf("%c",j);
            }
            printf("\n");
        }
    }
    
    return 0;
}
