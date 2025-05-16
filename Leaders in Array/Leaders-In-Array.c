#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf(" %d",&n);
    int a[n];
    printf("Enter the elements to array : ");
    for(int i=0; i<n; i++)
        scanf(" %d",&a[i]);
    int lea=a[n-1];
    printf("The leaders in the array are %d",lea);
    for(int j=n-2; j>=0; j--){
        if(lea<a[j]){
            lea=a[j];
            printf(", %d",a[j]);
        }
    }
    getch();
    return 0;
}
