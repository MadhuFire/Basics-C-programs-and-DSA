#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){ int n;
    printf("Enter the size of the array : ");
    scanf(" %d",&n);
    int a[n],t,x,y;
    printf("Enter the array elements : ");
    for (int i=0; i<n; i++){
        scanf(" %d",&a[i]);
    } 
    printf("Enter the target value to find the sum of two element in the array thats equal to the target,\n Target : ");
    scanf(" %d",&t);
    system("cls");

    printf("The Target : %d",t);
    printf("The Array : { %d",a[0]);
    for(int j=1; j<n; j++)
        printf(" ,%d",a[j]);
    printf(" }\n");
    for(int k=0; k<n-2; k++){
        for(int l=k+1; l<n; l++){
            if((a[k]+a[l])==t){
                x=k; y=l; break;
            }               
        }
    }
    printf("\nThe index is [ %d, %d].\ni.e, %d + %d = %d ",x,y,a[x],a[y],t);
    getch ();
    return 0;
}
