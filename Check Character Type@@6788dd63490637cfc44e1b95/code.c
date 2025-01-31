#include <stdio.h>
#include<string.h>
int main() {
   char ch;
   scanf("%c",&ch);
   if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
        if(ch==strch("aeiouAEIOU",ch)){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
   }
    else if(ch>='0'&& ch<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }

    return 0;
}
