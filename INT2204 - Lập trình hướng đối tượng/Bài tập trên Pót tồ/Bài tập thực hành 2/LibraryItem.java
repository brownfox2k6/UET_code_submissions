public abstract class LibraryItem {
  protected String title;
  protected String author;
  protected int year;
  protected boolean isAvailable;

  public LibraryItem() {
    title = "";
    author = "";
  }

  public LibraryItem(String title, String author, int year) {
    this.title = title;
    this.author = author;
    this.year = year;
  }

  public String getTitle() {
    return title;
  }

  public void setTitle(String title) {
    this.title = title;
  }

  public String getAuthor() {
    return author;
  }

  public void setAuthor(String author) {
    this.author = author;
  }

  public int getYear() {
    return year;
  }

  public void setYear(int year) {
    this.year = year;
  }

  public boolean isAvailable() {
    return isAvailable;
  }

  public void setAvailable(boolean available) {
    this.isAvailable = available;
  }

  public abstract String getInfo();

  public abstract double calculateLateFee(int days);

  @Override
  public String toString() {
    String f = "LibraryItem[title=%s,author=%s,year=%d,available=%s]";
    return String.format(f, title, author, year, isAvailable);
  }

  @Override
  public boolean equals(Object o) {
    return false;
  }
}
