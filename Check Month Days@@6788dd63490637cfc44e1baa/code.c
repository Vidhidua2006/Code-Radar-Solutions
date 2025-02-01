#include <stdio.h>
int main() {
   int month;
   scanf("%d",&month);
   switch(month){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    {
        printf("31");
    }
    case 2:
    {
        printf("28");
    }
    case 4:
    case 6:
    case 9:
    case 11:
    {
        printf("30");
    }
    default:
    {
        printf("Invalid");
    }

   }
    return 0;
}