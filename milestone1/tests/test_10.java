public class TestClass {
    private static final int MAX_VALUE = 100;
    private static int count = 0;

    // Test method with a loop and conditional statements
    public void test1() {
        for (int i = 0; i < MAX_VALUE; i++) {
            if (i % 2 == 0) {
                System.out.print(0);
            } else {
                System.out.print(1);
            }

            if (i < MAX_VALUE - 1) {
                System.out.println(11);
            } else {
                System.out.println(00);
            }
        }
    }


    // Test method with a nested loop
    public void test3() {
        for (int i = 0; i < MAX_VALUE; i++) {
            for (int j = 0; j < MAX_VALUE; j++) {
                if (i * j % 5 == 0) {
                    count++;
                }
            }
        }

        System.out.println(count);
    }


    // Test method with a complex expression
    public void test5() {
        int a = (MAX_VALUE - 10) * 2 + 5 / 2;
        int b = 2 * a - (MAX_VALUE / 3);
        boolean c = a > b && b < MAX_VALUE;

        System.out.println(a);
        System.out.println(b);
        System.out.println(c);
    }
}
