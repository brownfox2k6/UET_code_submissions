import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public interface Week11 {
  /**
   * sort a list, returns sorted list.
   */
  public static <T extends Comparable<? super T>> List<T> sortGeneric(List<T> list) {
    List<T> ret = new ArrayList<>(list);
    for (int i = 0; i < list.size(); ++i) {
      for (int j = i + 1; j < list.size(); ++j) {
        if (ret.get(i).compareTo(ret.get(j)) > 0) {
          Collections.swap(ret, i, j);
        }
      }
    }
    return ret;
  }
}