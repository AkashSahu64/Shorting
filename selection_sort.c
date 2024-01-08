#include<stdio.h>

void selection(int a[], int n){
    // int i,j,small;
    for(int i=0; i<n-1; i++){
         int small = i;
         
        for(int j=i+1; j<n; j++)
            if(a[j] < a[small]){
                small = j;
            }
            int t = a[small];
            a[small] = a[i];
            a[i] = t;
        

    }
}
void display(int a[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int a[] = {43,56,32,55,23,59,76,63};
    int n = sizeof(a)/sizeof(a[0]);
    printf("Before sorting the array : ");
    
    display(a, n);
    selection(a, n);
    printf("\nAfter sorting the array : ");
    display(a, n);

return 0;
}
