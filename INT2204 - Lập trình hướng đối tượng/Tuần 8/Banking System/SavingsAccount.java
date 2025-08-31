public class SavingsAccount extends Account {
  public SavingsAccount(long accountNumber, double balance) {
    super(accountNumber, balance);
  }

  /**
   * javadoc.
   */
  @Override
  public void withdraw(double amount) {
    try {
      if (amount > 1000) {
        throw new InvalidFundingAmountException(amount);
      } else if (balance < 5000) {
        throw new InsufficientFundsException(amount);
      }
      doWithdrawing(amount);
      addTransaction(new Transaction(Transaction.TYPE_WITHDRAW_SAVINGS,
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
      addTransaction(new Transaction(Transaction.TYPE_DEPOSIT_SAVINGS,
                                     amount, balance - amount, balance));
    } catch (BankException e) {
      System.out.println(e);
    }
  }
}
