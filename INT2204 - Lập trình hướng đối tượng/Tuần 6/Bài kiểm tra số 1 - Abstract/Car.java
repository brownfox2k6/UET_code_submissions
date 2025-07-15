public class Car extends Vehicle {
  private int numberOfDoors;

  /**
   * constructor.
   */
  public Car(String brand, String model, String registrationNumber,
             Person owner, int numberOfDoors) {
    super(brand, model, registrationNumber, owner);
    this.numberOfDoors = numberOfDoors;
  }

  /**
   * get info.
   */
  public String getInfo() {
    return "Car:\n\tBrand: " + super.getBrand() + "\n\tModel: " + super.getModel()
           + "\n\tRegistration Number: " + super.getRegistrationNumber()
           + "\n\tNumber of Doors: " + numberOfDoors
           + "\n\tBelongs to " + super.getOwner().getName() + " - "
           + super.getOwner().getAddress();
  }

  /**
   * get number of doors.
   */
  public int getNumberOfDoors() {
    return numberOfDoors;
  }

  /**
   * set number of doors.
   */
  public void setNumberOfDoors(int numberOfDoors) {
    this.numberOfDoors = numberOfDoors;
  }
}
