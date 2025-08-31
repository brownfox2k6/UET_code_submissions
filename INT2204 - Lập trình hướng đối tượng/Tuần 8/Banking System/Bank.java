import java.io.InputStream;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;
import java.util.Scanner;

public class Bank {
  private List<Customer> customerList = new ArrayList<>();

  /**
   * javadoc.
   */
  public void readCustomerList(InputStream inputStream) {
    List<String> input = new ArrayList<>();
    Scanner sc = new Scanner(inputStream);
    while (sc.hasNextLine()) {
      input.add(sc.nextLine());
    }
    for (int i = 0; i < input.size(); ) {
      String firstLine = input.get(i);
      int j = firstLine.lastIndexOf(' ');
      String fullName = firstLine.substring(0, j);
      long idNumber = Long.parseLong(firstLine.substring(j + 1));
      Customer customer = new Customer(idNumber, fullName);
      ++i;
      while (i < input.size()) {
        String line = input.get(i);
        if (!line.contains(Account.CHECKING) && !line.contains(Account.SAVINGS)) {
          break;
        }
        String[] s = line.split(" ");
        long accountNumber = Long.parseLong(s[0]);
        String accountType = s[1];
        double balance = Double.parseDouble(s[2]);
        if (accountType.equals(Account.CHECKING)) {
          customer.addAccount(new CheckingAccount(accountNumber, balance));
        } else {
          customer.addAccount(new SavingsAccount(accountNumber, balance));
        }
        ++i;
      }
      customerList.add(customer);
    }
  }

  /**
   * javadoc.
   */
  private String getCustomersInfoBy(Comparator<Customer> cmp) {
    List<Customer> list = new ArrayList<>(customerList);
    list.sort(cmp);
    StringBuilder sb = new StringBuilder();
    for (Customer c : list) {
      sb.append(c.getCustomerInfo()).append('\n');
    }
    return sb.toString();
  }

  public String getCustomersInfoByNameOrder() {
    return getCustomersInfoBy(Comparator.comparing(Customer::getFullName));
  }

  public String getCustomersInfoByIdOrder() {
    return getCustomersInfoBy(Comparator.comparingLong(Customer::getIdNumber));
  }

  public List<Customer> getCustomerList() {
    return customerList;
  }
}