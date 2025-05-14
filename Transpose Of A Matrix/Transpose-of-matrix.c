#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    int a[20][20],row,col;
    printf("Enter the size of the array to find its transpose,\nrow : ");
    scanf(" %d",&row);
    printf("column : ");
    scanf(" %d",&col);
    printf("\n Now enter the values to the array,\n");

    for(int i=0; i<row; i++)
       for(int j=0; j<col; j++){
           printf("Enter [%d][%d] : ",i,j); scanf(" %d",&a[i][j]);
       }
 
    system("cls");
    printf("The Matrix,\n");

    for(int k=0; k<row; k++){
       for(int l=0; l<col; l++){
           printf(" %d",a[k][l]); 
       } printf("\n");
    }  
    printf("\nThe transpose of the matrix,\n");
    for(int m=0; m<row; m++){
       for(int n=0; n<col; n++){
           printf(" %d",a[n][m]); 
       } printf("\n");
    } 
    
    getch();
    return 0;
}
