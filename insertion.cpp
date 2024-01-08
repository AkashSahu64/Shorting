#include<iostream>
using namespace std;

void insertion(int a[], int n){
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
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[] = {23,12,34,78,45,86,35};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"Before sorting the array : ";
    display(a,n);
    insertion(a,n);
    cout<<"\nAfter sorting the array : ";
    display(a,n);
    
    return 0;
}