class OuterClass {
  int x = 10;
  int MAX_VALUE = 999;
   int a = (MAX_VALUE - 10) * 2 + 5 / 2;
    int b = 2 * a - (MAX_VALUE / 3);

  class InnerClass {
    int y = 5;   
  }
}

public class Main {
  public static void main() {
    int a = 8;
    System.out.println(a);
  }
}