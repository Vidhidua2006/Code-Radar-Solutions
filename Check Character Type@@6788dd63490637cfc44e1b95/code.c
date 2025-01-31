#include <stdio.h>
int main() {
   char ch;
    char vowels="aeiouAEIOU";
   scanf("%c",&ch);
   if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
        if(ch==vowels){
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
