template <class T>
T maximum(T a, T b, T c, T d) {
  T mx = a;
  if (mx < b) mx = b;
  if (mx < c) mx = c;
  if (mx < d) mx = d;
  return mx;
}