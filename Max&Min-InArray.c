#include<stdio.h>
#include<conio.h>
int main(){
    int n,max,min;
    printf("Enter the size of the array : ");
    scanf(" %d",&n);
    int a[n];
    printf("Enter the array elements : ");
    for(int i=0; i<n; i++)
        scanf(" %d",&a[i]);
    
    max=a[0];min=a[0];
    for(int i=1;i<n;i++){
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
    }
    printf("\nMaximum element in array is %d.",max);
    printf("\nMinimum element in array is %d.",min);

    getch();
    return 0;
}
