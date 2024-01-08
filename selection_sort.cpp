#include<iostream>

using namespace std;

void selection(int a[], int n){
    int i,j,small;
    for(i=0; i<n-1; i++){
        small = i;
        
        for(j=i+1; j<n; j++)
        if(a[j] < a[small])
            small = j;
        
        int t = a[small];
        a[small] = a[i];
        a[i] = t;
    }
    cout<<a[i];
}
void display(int a[], int n){
   // int i;
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int a[] = {34,65,33,67,66,45};
    int n = sizeof(a)/sizeof(a[0]);
    
    cout<<"Before sorting the array :"<<endl;
    display(a,n);
    selection(a,n);
    cout<<"\nAfter sorting the array : "<<endl;
   display(a, n);
    return 0;
}