import java.util.ArrayList;
import java.util.List;

public class Library {
  private List<LibraryItem> items;

  public Library() {
    items = new ArrayList<>();
  }

  public void addItem(LibraryItem item) {
    items.add(item);
  }

  public void removeItem(LibraryItem item) {
    items.remove(item);
  }

  public List<LibraryItem> getItemsByAuthor(String author) {
    List<LibraryItem> ret = new ArrayList<>();
    for (LibraryItem item : items) {
      if (author.equals(item.author)) {
        ret.add(item);
      }
    }
    return ret;
  }

  public double getTotalLateFee(int days) {
    double fee = 0;
    for (LibraryItem item : items) {
      fee += item.calculateLateFee(days);
    }
    return fee;
  }

  public String getInfo() {
    StringBuilder sb = new StringBuilder("Library Inventory:\n");
    for (LibraryItem item : items) {
      sb.append(item.getInfo()).append("\n");
    }
    return sb.toString();
  }
}
