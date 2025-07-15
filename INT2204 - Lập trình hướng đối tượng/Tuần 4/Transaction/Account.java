import java.util.ArrayList;

public class Account {
  private double balance;
  private ArrayList<Transaction> transitionList = new ArrayList<Transaction>();

  /**
   * nap tien.
   */
  private void deposit(double amount) {
    if (amount <= 0) {
      System.out.println("So tien ban nap vao khong hop le!");
    } else {
      balance += amount;
      transitionList.add(new Transaction(Transaction.DEPOSIT, amount, balance));
    }
  }

  /**
   * rut tien.
   */
  private void withdraw(double amount) {
    if (amount <= 0) {
      System.out.println("So tien ban rut ra khong hop le!");
    } else if (amount > balance) {
      System.out.println("So tien ban rut vuot qua so du!");
    } else {
      balance -= amount;
      transitionList.add(new Transaction(Transaction.WITHDRAW, amount, balance));
    }
  }

  /**
   * them giao dich.
   */
  public void addTransaction(double amount, String operation) {
    if (operation.equals(Transaction.DEPOSIT)) {
      deposit(amount);
    } else if (operation.equals(Transaction.WITHDRAW)) {
      withdraw(amount);
    } else {
      System.out.println("Yeu cau khong hop le!");
    }
  }

  /**
   * in ra tat ca cac giao dich.
   */
  public void printTransaction() {
    for (int i = 0; i < transitionList.size(); ++i) {
      Transaction t = transitionList.get(i);
      String operation = t.getOperation().equals(Transaction.DEPOSIT) ? "Nap" : "Rut";
      double amount = t.getAmount();
      double balance = t.getBalance();
      String format = "Giao dich %d: %s tien $%.2f. So du luc nay: $%.2f.\n";
      System.out.printf(format, i + 1, operation, amount, balance);
    }
  }
}
