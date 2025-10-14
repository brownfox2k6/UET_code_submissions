public abstract class Employee {
  protected String name;
  protected String id;
  protected double baseSalary;
  protected int yearsOfExperience;

  public Employee() {
    this.name = "";
    this.id = "";
    this.baseSalary = 0;
    this.yearsOfExperience = 0;
  }

  public Employee(String name, String id, double baseSalary, int yearsOfExperience) {
    this.name = name;
    this.id = id;
    this.baseSalary = baseSalary;
    this.yearsOfExperience = yearsOfExperience;
  }

  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public double getBaseSalary() {
    return baseSalary;
  }

  public void setBaseSalary(double baseSalary) {
    this.baseSalary = baseSalary;
  }

  public int getYearsOfExperience() {
    return yearsOfExperience;
  }

  public void setYearsOfExperience(int yearsOfExperience) {
    this.yearsOfExperience = yearsOfExperience;
  }

  public abstract String getInfo();

  public abstract double calculateSalary();

  @Override
  public String toString() {
    return String.format("Employee[name=%s,id=%s,baseSalary=%.1f,yearsOfExperience=%d]",
            name, id, baseSalary, yearsOfExperience);
  }

  @Override
  public boolean equals(Object o) {
    if (o instanceof Employee) {
      Employee e = (Employee) o;
      return name.equals(e.name)
              && id.equals(e.id)
              && yearsOfExperience == e.yearsOfExperience;
    }
    return false;
  }
}
