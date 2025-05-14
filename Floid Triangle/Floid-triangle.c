#include<stdio.h>
#include<conio.h>

int main(){  int k=1,n=5;
    for(int i=1; i<n; i++){
        for(int l=n; l>i; l--)
            printf(" ");
        for(int j=1; j<i+1; j++,k++){
            printf(" %d",k);
        } printf("\n");
    }
        
    getch();
    return 0;
}
