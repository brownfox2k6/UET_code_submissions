public class Manager extends Employee {
  protected int teamSize;
  protected String department;

  public Manager() {
    this.teamSize = 0;
    this.department = "";
  }

  public Manager(String name, String id, double baseSalary, int yearsOfExperience, int teamSize, String department) {
    super(name, id, baseSalary, yearsOfExperience);
    this.teamSize = teamSize;
    this.department = department;
  }

  @Override
  public String getInfo() {
    return String.format("Manager(%s - %s) - %s Department, Team of %d",
            name, id, department, teamSize);
  }

  @Override
  public double calculateSalary() {
    return baseSalary + yearsOfExperience * 1000 + teamSize * 200;
  }

  @Override
  public String toString() {
    return String.format("Manager[name=%s,id=%s,baseSalary=%.1f,yearsOfExperience=%d,teamSize=%d,department=%s]",
            name, id, baseSalary, yearsOfExperience, teamSize, department);
  }

  @Override
  public boolean equals(Object o) {
    if (o instanceof Manager) {
      Manager m = (Manager) o;
      return name.equals(m.name)
              && id.equals(m.id)
              && yearsOfExperience == m.yearsOfExperience
              && teamSize == m.teamSize
              && department.equals(m.department);
    }
    return false;
  }
}
