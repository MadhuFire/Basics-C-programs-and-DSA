#include<stdio.h>
#include<conio.h>

int main(){
    int n,t;
    printf("Enter the size of the array : ");
    scanf(" %d",&n);
    int a[n];
    printf("Enter the elements to array : ");
    for(int i=0; i<n; i++)
        scanf(" %d",&a[i]);
    
    for(int i=1; i<n; i++){
        for(int j=i; j>=1; j--){
            if(a[j]<a[j-1]){
                t = a[j];
                a[j] = a[j-1];
                a[j-1] = t;
            }
        }
    }
    printf("\nThe sorted array,\n\t");
    for(int k=0; k<n; k++){
        printf(" %d",a[k]);
    }
    getch();
    return 0;
}
