public class Book extends LibraryItem {
  protected int pages;

  public Book() {
    super();
  }

  public Book(String title, String author, int year, boolean isAvailable, int pages) {
    super(title, author, year);
    super.setAvailable(isAvailable);
    this.pages = pages;
  }

  public int getPages() {
    return pages;
  }

  public void setPages(int pages) {
    this.pages = pages;
  }

  @Override
  public String getInfo() {
    String f = "Book(%s by %s, %d) - %d pages";
    return String.format(f, title, author, year, pages);
  }

  @Override
  public double calculateLateFee(int days) {
    double fee = 1000;
    if (pages > 500) {
      fee *= 1.5;
    } else if (pages < 200) {
      fee *= 0.8;
    }
    return fee * days;
  }

  @Override
  public String toString() {
    String f = "Book[title=%s,author=%s,year=%d,available=%s,pages=%d]";
    return String.format(f, title, author, year, isAvailable, pages);
  }

  @Override
  public boolean equals(Object o) {
    if (o instanceof Book) {
      Book b = (Book) o;
      return author.equals(b.author) && title.equals(b.title)
              && year == b.year && pages == b.pages;
    }
    return false;
  }
}
