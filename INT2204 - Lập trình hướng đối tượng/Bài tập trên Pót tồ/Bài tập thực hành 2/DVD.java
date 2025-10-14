public class DVD extends LibraryItem {
  protected int duration;

  public DVD() {
    super();
  }

  public DVD(String title, String author, int year, boolean isAvailable, int duration) {
    super(title, author, year);
    super.setAvailable(isAvailable);
    this.duration = duration;
  }

  public int getDuration() {
    return duration;
  }

  public void setDuration(int duration) {
    this.duration = duration;
  }

  @Override
  public String getInfo() {
    String f = "DVD(%s by %s, %d) - %d minutes";
    return String.format(f, title, author, year, duration);
  }

  @Override
  public double calculateLateFee(int days) {
    double fee = 2000;
    if (duration > 120) {
      fee *= 1.3;
    } else if (duration < 90) {
      fee *= 0.9;
    }
    return fee * days;
  }

  @Override
  public String toString() {
    String f = "DVD[title=%s,author=%s,year=%d,available=%s,duration=%d]";
    return String.format(f, title, author, year, isAvailable, duration);
  }

  @Override
  public boolean equals(Object o) {
    if (o instanceof DVD) {
      DVD d = (DVD) o;
      return author.equals(d.author) && title.equals(d.title)
              && year == d.year && duration == d.duration;
    }
    return false;
  }
}
