class StudentManagement {
  private Student[] students = new Student[100];
  int count = 0;

  /**
   * add student.
   */
  public void addStudent(Student newStudent) {
    students[count++] = newStudent;
  }

  /**
   * remove student.
   */
  public void removeStudent(String id) {
    for (int i = 0; i < count; ++i) {
      if (students[i].getId().equals(id)) {
        System.arraycopy(students, i + 1, students, i, count - i - 1);
        students[--count] = null;
        return;
      }
    }
  }

  /**
   * print students by group.
   */
  public String studentsByGroup() {
    boolean[] printed = new boolean[count];
    String res = "";
    for (int i = 0; i < count; ++i) {
      if (printed[i]) {
        continue;
      }
      res += students[i].getGroup() + '\n';
      for (int j = i; j < count; ++j) {
        if (students[j].getGroup().equals(students[i].getGroup())) {
          res += students[j].getInfo() + '\n';
          printed[j] = true;
        }
      }
    }
    return res;
  }

  /**
   * check if two given students are of the same group.
   */
  public static boolean sameGroup(Student s1, Student s2) {
    return s1.getGroup().equals(s2.getGroup());
  }
}