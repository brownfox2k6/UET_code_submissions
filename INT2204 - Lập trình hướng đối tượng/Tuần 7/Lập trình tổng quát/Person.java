import java.util.ArrayList;
import java.util.List;

public class Person implements Comparable<Person>, Week11 {
  protected String name;
  protected int age;
  protected String address;

  public Person() {
    name = address = "";
    age = 0;
  }

  /**
   * constructor.
   */
  public Person(String name, int age, String address) {
    this.name = name;
    this.age = age;
    this.address = address;
  }

  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public int getAge() {
    return age;
  }

  public void setAge(int age) {
    this.age = age;
  }

  public String getAddress() {
    return address;
  }

  public void setAddress(String address) {
    this.address = address;
  }

  /**
   * Compare.
   */
  @Override
  public int compareTo(Person p) {
    if (!name.equals(p.getName())) {
      List<String> names = new ArrayList<>();
      names.add(name);
      names.add(p.getName());
      names = Week11.sortGeneric(names);
      return names.get(0).equals(name) ? -1 : 1;
    }
    if (age != p.getAge()) {
      List<Integer> ages = new ArrayList<>();
      ages.add(age);
      ages.add(p.getAge());
      ages = Week11.sortGeneric(ages);
      return ages.get(0) == age ? -1 : 1;
    }
    return 0;
  }
}
