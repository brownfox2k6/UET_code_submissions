public class Developer extends Employee {
  protected String programmingLanguage;
  protected int projectsCompleted;

  public Developer() {
    this.programmingLanguage = "";
    this.projectsCompleted = 0;
  }

  public Developer(String name, String id, double baseSalary, int yearsOfExperience,
                   String programmingLanguage, int projectsCompleted) {
    super(name, id, baseSalary, yearsOfExperience);
    this.programmingLanguage = programmingLanguage;
    this.projectsCompleted = projectsCompleted;
  }

  @Override
  public String getInfo() {
    return String.format("Developer(%s - %s) - %s, %d projects",
            name, id, programmingLanguage, projectsCompleted);
  }

  @Override
  public double calculateSalary() {
    return baseSalary + yearsOfExperience * 500 + projectsCompleted * 1000;
  }

  @Override
  public String toString() {
    return String.format("Developer[name=%s,id=%s,baseSalary=%.1f,yearsOfExperience=%d,programmingLanguage=%s,projectsCompleted=%d]",
            name, id, baseSalary, yearsOfExperience, programmingLanguage, projectsCompleted);
  }

  @Override
  public boolean equals(Object o) {
    if (o instanceof Developer) {
      Developer d = (Developer) o;
      return name.equals(d.name)
              && id.equals(d.id)
              && yearsOfExperience == d.yearsOfExperience
              && programmingLanguage.equals(d.programmingLanguage)
              && projectsCompleted == d.projectsCompleted;
    }
    return false;
  }
}
