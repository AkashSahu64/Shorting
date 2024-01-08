public class Insertion{
    void inserionSort(int a[]){
        int n = a.length;
        for(int i=0; i<n; i++){
            int t = a[i];
            int j = i-1;
            while(j>=0 && t<=a[j]){
                a[j+1] = a[j];
                j = j-1;
            }
            a[j+1] = t;
        }
    }
    void display(int a[]){
        int n = a.length;
        for(int i=0; i<n; i++){
            System.out.print(a[i]+" ");
        }
    }
    public static void main(String[] args){
        Insertion akash = new Insertion();
        int a[] = {32,34,11,12,56,54,12};
        System.out.print("Before sorting the array : ");
        akash.display(a);
        akash.inserionSort(a);
        System.out.print("\nAfter sorting the array : ");
        akash.display(a);
    }    
}