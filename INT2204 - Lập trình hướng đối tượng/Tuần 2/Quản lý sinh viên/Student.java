public class Student {
  private String name;
  private String id;
  private String group;
  private String email;

  /**
   * first constructor.
   */
  Student() {
    this.name = "Student";
    this.id = "000";
    this.group = "K62CB";
    this.email = "uet@vnu.edu.vn";
  }

  /**
   * second constructor.
   */
  Student(String name, String id, String email) {
    this.name = name;
    this.id = id;
    this.group = "K62CB";
    this.email = email;
  }

  /**
   * third constructor.
   */
  Student(Student s) {
    this.name = s.getName();
    this.id = s.getId();
    this.group = s.getGroup();
    this.email = s.getEmail();
  }

  /**
   * getter for name.
   */
  public String getName() {
    return this.name;
  }

  /**
   * setter for name.
   */
  public void setName(String n) {
    this.name = n;
  }

  /**
   * getter for id.
   */
  public String getId() {
    return this.id;
  }

  /**
   * setter for id.
   */
  public void setId(String i) {
    this.id = i;
  }

  /**
   * getter for group.
   */
  public String getGroup() {
    return this.group;
  }

  /**
   * setter for group.
   */
  public void setGroup(String g) {
    this.group = g;
  }

  /**
   * getter for email.
   */
  public String getEmail() {
    return this.email;
  }

  /**
   * setter for email.
   */
  public void setEmail(String e) {
    this.email = e;
  }

  /**
   * get student info.
   */
  public String getInfo() {
    return this.name + " - " + this.id + " - " + this.group + " - " + this.email;
  }
}