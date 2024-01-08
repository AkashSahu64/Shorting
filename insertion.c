#include<stdio.h>

void insertion (int a[], int n){
    for(int i=0; i<n; i++){
        int t = a[i];
        int j = i-1;
        while (j>=0 && t<=a[j])
        {
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = t;
    }
}
void display(int a[], int n){
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int a[] = {34,55,32,21,65,13,88,43};
    int n = sizeof(a)/sizeof(a[0]);
    printf("Before sorting the array : ");
    display(a,n);
    insertion(a,n);
    printf("\nAfer sorting the array : ");
    display(a,n);
    return 0;
}