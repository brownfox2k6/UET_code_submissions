import java.util.ArrayList;
import java.util.List;

public class Company {
  private List<Employee> employees;

  public Company() {
    employees = new ArrayList<>();
  }

  public void addEmployee(Employee e) {
    employees.add(e);
  }

  public void removeEmployee(Employee e) {
    employees.remove(e);
  }

  public List<Employee> getEmployeesByDepartment(String department) {
    List<Employee> list = new ArrayList<>();
    for (Employee e : employees) {
      if (e instanceof Manager) {
        Manager m = (Manager) e;
        if (department.equals(m.department)) {
          list.add(e);
        }
      }
    }
    return list;
  }

  public double getTotalSalary() {
    double total = 0;
    for (Employee e : employees) {
      total += e.calculateSalary();
    }
    return total;
  }

  public String getInfo() {
    StringBuilder sb = new StringBuilder("Company Employees:\n");
    for (Employee e : employees) {
      sb.append(e.getInfo()).append('\n');
    }
    return sb.toString();
  }
}
