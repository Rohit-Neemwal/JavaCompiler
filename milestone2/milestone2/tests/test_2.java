public class TypeCoercion {
    public static void main(int args[]) {
        int intVar = 100;
        long longVar = intVar;
        float floatVar = longVar;
        double doubleVar = longVar;

        double dVar = 3.141596;
        long lVar = dVar;
        int iVar = dVar;

        System.out.println(3.14F);

        double exp = intVar + longVar + dVar * floatVar + lVar + doubleVar + iVar;
        System.out.println(exp);
    }
}