#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{   int n,s=0;
    printf("Enter a number : ");
    scanf(" %d",&n); int t=n;
    while(n){
      s += pow(n%10,3); n/=10;
    } 
    if(s == t) printf("The given number is an Armstrong number.");
    else printf("The given number is not an Armstrong number.");
    getch();   
    return 0;
}