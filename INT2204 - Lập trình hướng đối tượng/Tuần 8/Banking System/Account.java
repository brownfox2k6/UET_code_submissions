import java.util.ArrayList;
import java.util.List;

public abstract class Account {
  public static final String CHECKING = "CHECKING";
  public static final String SAVINGS = "SAVINGS";
  protected long accountNumber = 0;
  protected double balance = 0;
  protected List<Transaction> transactionList = new ArrayList<>();

  public Account() {}

  public Account(long accountNumber, double balance) {
    this.accountNumber = accountNumber;
    this.balance = balance;
  }

  public long getAccountNumber() {
    return accountNumber;
  }

  public double getBalance() {
    return balance;
  }

  /**
   * javadoc.
   */
  public void doWithdrawing(double amount) throws BankException {
    if (amount < 0) {
      throw new InvalidFundingAmountException(amount);
    } else if (amount > balance) {
      throw new InsufficientFundsException(amount);
    }
    balance -= amount;
  }

  /**
   * javadoc.
   */
  public void doDepositing(double amount) throws BankException {
    if (amount < 0) {
      throw new InvalidFundingAmountException(amount);
    }
    balance += amount;
  }

  public abstract void withdraw(double amount);

  public abstract void deposit(double amount);

  /**
   * javadoc.
   */
  public String getTransactionHistory() {
    StringBuilder sb = new StringBuilder();
    sb.append("Lịch sử giao dịch của tài khoản ").append(accountNumber).append(":\n");
    for (Transaction t : transactionList) {
      sb.append(t.getTransactionSummary()).append('\n');
    }
    return sb.toString();
  }

  public void addTransaction(Transaction transaction) {
    transactionList.add(transaction);
  }

  /**
   * javadoc.
   */
  @Override
  public boolean equals(Object obj) {
    if (obj instanceof Account) {
      Account other = (Account) obj;
      return accountNumber == other.getAccountNumber();
    }
    return false;
  }
}
