public class Student extends Person {
  private String program;
  private int year;
  private double fee;

  /**
   * constructor.
   */
  public Student(String name, String address, String p, int y, double f) {
    super(name, address);
    program = p;
    year = y;
    fee = f;
  }

  public String getProgram() {
    return program;
  }

  public void setProgram(String p) {
    program = p;
  }

  public int getYear() {
    return year;
  }

  public void setYear(int y) {
    year = y;
  }

  public double getFee() {
    return fee;
  }

  public void setFee(double f) {
    fee = f;
  }

  @Override
  public String toString() {
    return "Student[" + super.toString() + ",program="
           + program + ",year=" + year + ",fee=" + fee + "]";
  }
}
