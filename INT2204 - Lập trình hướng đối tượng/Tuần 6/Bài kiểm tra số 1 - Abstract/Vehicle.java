abstract class Vehicle {
  protected String brand;
  protected String model;
  protected String registrationNumber;
  protected Person owner;

  /**
   * constructor.
   */
  public Vehicle(String brand, String model, String registrationNumber, Person owner) {
    this.brand = brand;
    this.model = model;
    this.registrationNumber = registrationNumber;
    this.owner = owner;
  }

  /**
   * abstract.
   */
  abstract String getInfo();

  /**
   * transfer ownership.
   */
  public void transferOwnership(Person newOwner) {
    owner = newOwner;
  }

  /**
   * get brand.
   */
  public String getBrand() {
    return brand;
  }

  /**
   * set brand.
   */
  public void setBrand(String brand) {
    this.brand = brand;
  }

  /**
   * get model.
   */
  public String getModel() {
    return model;
  }

  /**
   * set model.
   */
  public void setModel(String model) {
    this.model = model;
  }

  /**
   * get registration number.
   */
  public String getRegistrationNumber() {
    return registrationNumber;
  }

  /**
   * set registration number.
   */
  public void setRegistrationNumber(String registrationNumber) {
    this.registrationNumber = registrationNumber;
  }

  /**
   * get owner.
   */
  public Person getOwner() {
    return owner;
  }

  /**
   * set owner.
   */
  public void setOwner(Person owner) {
    this.owner = owner;
  }
}