import java.util.Scanner;
class Ran{
    void table(int n){
    
    for(int i; i<=n; i++){
        System.out.println(i*n);

    }
    }
    public static void main(String [] args){
        Scanner akash = new Scanner(System.in);
        Run scan = new Run();
        int n = akash.nextInt();
        scan.table(n);
    }
}