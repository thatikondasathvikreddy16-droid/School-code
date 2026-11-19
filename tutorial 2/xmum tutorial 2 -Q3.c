#include<stdio.h>
int main(){
    char letter[2];
    printf("enter a letter\n");
    scanf(" %c",&letter[0]);
   if(letter[0]=='a'|| letter[0]=='e'|| letter[0]=='i'|| letter[0]=='o'|| letter[0]=='u'){

        printf("it a vowel");
    }
    else{
        printf("its  consonent ");
    }
    return 0;
}