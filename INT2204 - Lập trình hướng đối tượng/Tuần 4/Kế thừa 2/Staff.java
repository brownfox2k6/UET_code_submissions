public class Staff extends Person {
  private String school;
  private double pay;

  /**
   * constructor.
   */
  public Staff(String name, String address, String s, double p) {
    super(name, address);
    school = s;
    pay = p;
  }

  public String getSchool() {
    return school;
  }

  public void setSchool(String s) {
    school = s;
  }

  public double getPay() {
    return pay;
  }

  public void setPay(double p) {
    pay = p;
  }

  @Override
  public String toString() {
    return "Staff[" + super.toString() + ",school=" + school + ",pay=" + pay + "]";
  }
}
