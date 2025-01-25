#include <stdio.h>

int main() {
    int a,b,c;
    float average;
    scanf("%f %f %f", &a,&b,&c);
    average=(a+b+c)/3.0;
    printf("Averge: %.2f",average);
    return 0;
}