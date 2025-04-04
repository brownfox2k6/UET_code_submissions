void printImage(const Image& img) {
  for (int i = 0; i < img.height; ++i) {
    for (int j = 0; j < img.width; ++j) {
      cout << img.pixels[i * img.width + j] << ' ';
    }
    cout << '\n';
  }
}

Image halve(const Image& img) {
  Image res;
  res.width = (img.width + 1) / 2;
  res.height = (img.height + 1) / 2;
  res.pixels = new int[res.width * res.height];
  int k = 0;
  for (int i = 0; i < img.height; i += 2) {
    for (int j = 0; j < img.width; j += 2) {
      res.pixels[k++] = img.pixels[i * img.width + j];
    }
  }
  return res;
}
