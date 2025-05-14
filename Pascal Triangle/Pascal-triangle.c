#include<stdio.h>
#include<conio.h>

int main(){
    int n, i, j, val=1;
    printf("Enter the number of rows to print Pascal's Triangle : ");
    scanf(" %d",&n);

    for(i=0;i<=n-1;i++){
        for(int k=n; k>i; k--)
            printf(" ");
        printf("1");
        for(int j=1; j<=i; j++){
            val= (val*(i-j+1))/j;
            printf(" %d",val);
        }  printf("\n");
    }
    getch();
    return 0;
}
