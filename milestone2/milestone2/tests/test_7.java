
public class fibonacci{
    public static void main(){
        int n = 9;
        System.out.println(n); 
    }
    public static void fib(int n){
        int arrow = 10, water=998;
        arrow= 12 + arrow;
        water = arrow + 4 + 55+water;
        System.out.println(arrow); 


    }
}

public class TypeCoercion {
    public static void main(int args[]) {
        int banana = 100;
        long apple = banana;
        float floatVar = apple;
        double doubleVar = apple;

        double dVar = 3.141596;
        long lVar = dVar;
        int iVar = dVar;

        System.out.println(3.14F);

        double exp = banana + apple + dVar * floatVar + lVar + doubleVar + iVar;
        System.out.println(exp);
    }
}