import java.util.Calendar;

public class Motorcycle extends Vehicle {
  protected int engineSize;

  public Motorcycle() {
  }

  public Motorcycle(String brand, String model, int year, int engineSize) {
    super(brand, model, year);
    this.engineSize = engineSize;
  }

  @Override
  public String getInfo() {
    return String.format("Motorcycle(%s %s %d) - %dcc", brand, model, year, engineSize);
  }

  @Override
  public double calculateValue() {
    int age = Calendar.getInstance().get(Calendar.YEAR) - year;
    double baseValue = (age < 3 ? 20000 : (age < 8 ? 10000 : 5000));
    return baseValue + 10 * engineSize;
  }

  @Override
  public String toString() {
    return String.format("Motorcycle[brand=%s,model=%s,year=%d,engineSize=%d]", brand, model, year, engineSize);
  }

  @Override
  public boolean equals(Object o) {
    if (!(o instanceof Motorcycle)) {
      return false;
    }
    Motorcycle c = (Motorcycle) o;
    return brand.equals(c.brand) && model.equals(c.model) && year == c.year && engineSize == c.engineSize;
  }
}
