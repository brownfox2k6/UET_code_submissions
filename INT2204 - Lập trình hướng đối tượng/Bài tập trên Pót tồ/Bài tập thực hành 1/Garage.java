import java.util.ArrayList;
import java.util.List;

public class Garage {
  private List<Vehicle> vehicles;

  public Garage() {
    vehicles = new ArrayList<>();
  }

  public void addVehicle(Vehicle v) {
    vehicles.add(v);
  }

  public void removeVehicle(Vehicle v) {
    vehicles.remove(v);
  }

  public List<Vehicle> getVehiclesByBrand(String brand) {
    List<Vehicle> ret = new ArrayList<>();
    for (Vehicle v : vehicles) {
      if (v.getBrand().equals(brand)) {
        ret.add(v);
      }
    }
    return ret;
  }

  public double getTotalValue() {
    double ret = 0;
    for (Vehicle v : vehicles) {
      ret += v.calculateValue();
    }
    return ret;
  }

  public String getInfo() {
    StringBuilder sb = new StringBuilder("Garage Inventory:\n");
    for (Vehicle v : vehicles) {
      sb.append(v.getInfo());
      sb.append("\n");
    }
    return sb.toString();
  }
}
