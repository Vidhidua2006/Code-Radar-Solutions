#include <stdio.h>
int main() {
   char ch;
   vowels="a,e,i,o,u,A,E,I,O,U";
   scanf("%d",&ch);
   if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
        if(ch==vowels){
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
