void print(const vector<Student>& student_list) {
  for (const Student &s : student_list) {
    cout << s.id << ' ' << s.name << ' ' << s.gpa << '\n';
  }
}

int find(const vector<Student>& student_list, string id) {
  for (size_t i = 0; i < student_list.size(); ++i) {
    if (student_list[i].id == id) {
      return i;
    }
  }
  return -1;
}

vector<Student> top3(const vector<Student>& student_list) {
  size_t sz = min(student_list.size(), size_t(3));
  vector<Student> cpy = student_list;
  partial_sort(cpy.begin(), cpy.end(), cpy.begin() + sz, [&](const Student &a, const Student &b) {
    return a.gpa > b.gpa;
  });
  return vector<Student>(cpy.begin(), cpy.begin() + sz);
}