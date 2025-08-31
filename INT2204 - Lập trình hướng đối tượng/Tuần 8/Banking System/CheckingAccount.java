public class CheckingAccount extends Account {
  public CheckingAccount(long accountNumber, double balance) {
    super(accountNumber, balance);
  }
  
  /**
   * javadoc.
   */
  @Override
  public void withdraw(double amount) {
    try {
      doWithdrawing(amount);
      addTransaction(new Transaction(Transaction.TYPE_WITHDRAW_CHECKING,
                                     amount, balance + amount, balance));
    } catch (BankException e) {
      System.out.println(e);
    }
  }

  /**
   * javadoc.
   */
  @Override
  public void deposit(double amount) {
    try {
      doDepositing(amount);
      addTransaction(new Transaction(Transaction.TYPE_DEPOSIT_CHECKING,
                                     amount, balance - amount, balance));
    } catch (BankException e) {
      System.out.println(e);
    }
  }
}
