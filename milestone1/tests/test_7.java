
public class fibonacci{
    public static void main(){
        int n;
        Scanner snr= new Scanner(System.in);
        n=snr.nextInt();
        snr.close();
        System.out.println(fib(n)); 
//Printing number in Fibonacci series
    }
    public static int fib(int n){
        if(n==0 || n==1){
            return n;
        }
        else{
            return fib(n-1)+fib(n-2);
            // Recursive calls
        }
    }
}