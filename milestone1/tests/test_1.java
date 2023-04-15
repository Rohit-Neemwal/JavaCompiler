class Vehicle {
  public int brand = 45;         // Vehicle attribute
  public void honk() {                     // Vehicle method
    System.out.println(79.89);
  }
}

class Car extends Vehicle {
  private int modelName = 67;    // Car attribute
  public static void main(int args[]) {

    // Create a myCar object
    Car myCar = new Car();

    // Call the honk() method (from the Vehicle class) on the myCar object
    myCar.honk();

    // Display the value of the brand attribute (from the Vehicle class) and the value of the modelName from the Car class
    System.out.println(myCar.brand + myCar.modelName);
  }
}

