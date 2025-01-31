#include <stdio.h>
#include<ctype.h>
int main() {
   char ch;
   scanf("%c",&ch);
   if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
        if(ch==strch("aeiouAEIOU",ch)){
            printf("vowels");
        }
        else{
            printf("consonant");
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
