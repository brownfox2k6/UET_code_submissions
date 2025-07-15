public class MotorBike extends Vehicle {
  private boolean hasSidecar;

  /**
   * constructor.
   */
  public MotorBike(String brand, String model, String registrationNumber,
                   Person owner, boolean hasSidecar) {
    super(brand, model, registrationNumber, owner);
    this.hasSidecar = hasSidecar;
  }

  /**
   * get info.
   */
  public String getInfo() {
    return "Motor Bike:\n\tBrand: " + super.getBrand() + "\n\tModel: " + super.getModel()
           + "\n\tRegistration Number: " + super.getRegistrationNumber()
           + "\n\tHas Side Car: " + hasSidecar
           + "\n\tBelongs to " + super.getOwner().getName() + " - "
           + super.getOwner().getAddress();
  }

  /**
   * is has side car.
   */
  public boolean isHasSidecar() {
    return hasSidecar;
  }

  /**
   * set has side car.
   */
  public void setHasSidecar(boolean hasSidecar) {
    this.hasSidecar = hasSidecar;
  }
}