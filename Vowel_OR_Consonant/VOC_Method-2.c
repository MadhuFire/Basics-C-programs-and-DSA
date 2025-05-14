#include<stdio.h>
#include<conio.h>

int main(){
    char a; int b;
    printf("--- Checks given character i a vowel or consonant ---");
    again :
    printf("\nEnter a character : ");
    scanf("%c",&a);
    b = a;
    if( (b>64 && b<91) || (b>96) && (b<123) ) ;
    else { 
        printf("Enter a valid number.");
        goto again;
    }
    a = (b>64 && b<91) ? a+32 : a ;
    if( (a=='a'|| a=='e') || (a=='i' || a=='o'))
       printf("The given character %c is a vowel.",a-32);
    else if (a=='u')
        printf("The given character %c is a vowel.",a-32);
    else 
         printf("The given character %c is a consonant.",a-32);

    getch();
    return 0;
}
