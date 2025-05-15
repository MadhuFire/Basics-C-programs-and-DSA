#include<stdio.h>
#include<conio.h>

int main(){
    int k=10;
    for(int i=4;i>0;i--){
        for(int l=i; l<4;l++){
            printf(" ");
        }
        for(int j=0; j<i; j++){
            printf(" %d",k); k--;
        } printf("\n");
    } getch();
    return 0;
}
