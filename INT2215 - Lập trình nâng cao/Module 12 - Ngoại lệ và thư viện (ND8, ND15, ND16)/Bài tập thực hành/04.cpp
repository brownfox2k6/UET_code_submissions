class MyIntSet {
public:
  MyIntSet() {
    maxSize = 1000;
    num = 0;
    elements = new int[maxSize];
  }
  MyIntSet(int a[], int n) {
    maxSize = num = n;
    elements = new int[n];
    for (int i = 0; i < n; ++i) {
      elements[i] = a[i];
    }
  }
  ~MyIntSet() {
    delete[] elements;
    maxSize = num = 0;
  }
  bool insertVal(int v) {
    if (findVal(v)) {
      return false;
    }
    if (num == maxSize) {
      int *tmp = new int[2 * num + 1];
      for (int i = 0; i < num; ++i) {
        tmp[i] = elements[i];
      }
      maxSize = 2 * maxSize + 1;
      swap(tmp, elements);
      delete[] tmp;
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
  void clearAll() {
    num = 0;
  }
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
  int maxSize;
  int *elements;
  int num;
};