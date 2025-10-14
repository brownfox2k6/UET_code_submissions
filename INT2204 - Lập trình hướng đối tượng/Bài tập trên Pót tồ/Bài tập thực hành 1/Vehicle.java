public abstract class Vehicle {
  protected String brand;
  protected String model;
  protected int year;

  public Vehicle() {

  }

  public Vehicle(String brand, String model, int year) {
    this.brand = brand;
    this.model = model;
    this.year = year;
  }

  public String getBrand() {
    return brand;
  }

  public void setBrand(String brand) {
    this.brand = brand;
  }

  public String getModel() {
    return model;
  }

  public void setModel(String model) {
    this.model = model;
  }

  public int getYear() {
    return year;
  }

  public void setYear(int year) {
    this.year = year;
  }

  public abstract String getInfo();

  public abstract double calculateValue();

  @Override
  public String toString() {
    return String.format("Vehicle[brand=%s,model=%s,year=%d]", brand, model, year);
  }

  @Override
  public boolean equals(Object o) {
    return false;
  }
}