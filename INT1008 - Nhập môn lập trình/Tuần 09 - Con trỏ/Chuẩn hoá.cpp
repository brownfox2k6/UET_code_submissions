void normalize(double* out, int *in, int n) {
  for (int i = 0; i < n; ++i) {
    out[i] = in[i] / 255.0;
  }
}