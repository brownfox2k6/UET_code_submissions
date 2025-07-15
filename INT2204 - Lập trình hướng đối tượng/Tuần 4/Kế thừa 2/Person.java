public class Person {
  private String name;
  private String address;

  /**
   * constructor.
   */
  public Person(String n, String a) {
    name = n;
    address = a;
  }

  public String getName() {
    return name;
  }

  public void setName(String n) {
    name = n;
  }

  public String getAddress() {
    return address;
  }

  public void setAddress(String a) {
    address = a;
  }

  public String toString() {
    return "Person[name=" + name + ",address=" + address + "]";
  }
}