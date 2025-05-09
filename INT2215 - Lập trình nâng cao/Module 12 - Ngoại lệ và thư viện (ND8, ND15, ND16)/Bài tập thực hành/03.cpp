class MyIntSet {
public:
  MyIntSet() : num(0) {}
  MyIntSet(int a[], int n) {
    if (n > MAX_SIZE)
      num = MAX_SIZE;
    else
      num = n;
    for (int i = 0; i < num; i++)
      elements[i] = a[i];
  }
  bool insertVal(int v) {
    if (num == MAX_SIZE || findVal(v)) {
      return false;
    }
    elements[num++] = v;
    return true;
  }
  bool eraseVal(int v) {
    for (int i = 0; i < num; ++i) {
      if (elements[i] == v) {
        elements[i] = elements[--num];
        return true;
      }
    }
    return false;
  }
  void clearAll() { num = 0; }
  bool findVal(int v) const {
    for (int i = 0; i < num; ++i) {
      if (elements[i] == v) {
        return true;
      }
    }
    return false;
  }
  bool isEmpty() const { return num == 0; }
  int getSize() const { return num; }
  const int *getBeginPtr() const { return elements; }
  const int *getEndPtr() const { return elements + num - 1; }

private:
  static const int MAX_SIZE = 1000;
  int elements[MAX_SIZE];
  int num; // count real values in this set
};