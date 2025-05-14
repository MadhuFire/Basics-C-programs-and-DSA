#include<stdio.h>
#include<conio.h>

void main(){
    char a;
    printf("Enter a character : ");
    scanf("%c",&a);

    if(a=='a' || a=='A' || a=='e'|| a=='E'|| a=='i' || a=='I' || a=='o' || a=='O' || a=='u' || a=='U')
        printf("The given character %c is an vowel.");
    else
        printf("The given character %c is a consonant.");

    getch();
}
