import java.util.ArrayList;
import java.util.List;

public class Person {
  private String name;
  private String address;
  private List<Vehicle> vehicleList = new ArrayList<Vehicle>();

  /**
   * constructor.
   */
  public Person(String name, String address) {
    this.name = name;
    this.address = address;
  }

  /**
   * add vehicle.
   */
  public void addVehicle(Vehicle vehicle) {
    vehicleList.add(vehicle);
  }

  /**
   * remove vehicle.
   */
  public void removeVehicle(String registrationNumber) {
    for (int i = 0; i < vehicleList.size(); ++i) {
      if (vehicleList.get(i).registrationNumber.equals(registrationNumber)) {
        vehicleList.remove(i);
        return;
      }
    }
  }

  /**
   * get vehicles info.
   */
  public String getVehiclesInfo() {
    List<String> list = new ArrayList<String>();
    for (int i = 0; i < vehicleList.size(); ++i) {
      Vehicle vehicle = vehicleList.get(i);
      if (vehicle.getOwner().getName().equals(name)) {
        list.add(vehicle.getInfo());
      }
    }
    if (list.isEmpty()) {
      return name + " has no vehicle!";
    }
    String ret = name + " has:\n\n";
    for (int i = 0; i < list.size(); ++i) {
      ret += list.get(i);
      ret += "\n";
    }
    return ret;
  }

  /**
   * get name.
   */
  public String getName() {
    return name;
  }

  /**
   * set name.
   */
  public void setName(String name) {
    this.name = name;
  }

  /**
   * get address.
   */
  public String getAddress() {
    return address;
  }

  /**
   * set address.
   */
  public void setAddress(String address) {
    this.address = address;
  }
}