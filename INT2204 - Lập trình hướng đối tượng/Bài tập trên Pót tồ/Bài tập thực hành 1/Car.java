import java.util.Calendar;

public class Car extends Vehicle {
  protected int seats;

  public Car() {
    super();
  }

  public Car(String brand, String model, int year, int seats) {
    super(brand, model, year);
    this.seats = seats;
  }

  @Override
  public String getInfo() {
    return String.format("Car(%s %s %d) - %d seats", brand, model, year, seats);
  }

  @Override
  public double calculateValue() {
    int age = Calendar.getInstance().get(Calendar.YEAR) - year;
    double baseValue = (age < 3 ? 50000 : (age < 8 ? 30000 : 15000));
    System.out.println(seats + " " + year + " " + baseValue);
    return baseValue + 1000 * seats;
  }

  @Override
  public String toString() {
    return String.format("Car[brand=%s,model=%s,year=%d,seats=%d]", brand, model, year, seats);
  }

  @Override
  public boolean equals(Object o) {
    if (!(o instanceof Car)) {
      return false;
    }
    Car c = (Car) o;
    return brand.equals(c.brand) && model.equals(c.model) && year == c.year && seats == c.seats;
  }
}
