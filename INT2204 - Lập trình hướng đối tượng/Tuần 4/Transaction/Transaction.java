public class Transaction {
  private String operation;
  private double amount;
  private double balance;
  public static final String DEPOSIT = "deposit";
  public static final String WITHDRAW = "withdraw";

  /**
   * constructor.
   */
  Transaction(String op, double am, double bal) {
    this.operation = op;
    this.amount = am;
    this.balance = bal;
  }
  
  /**
   * getter for operation.
   */
  public String getOperation() {
    return this.operation;
  }

  /**
   * setter for operation.
   */
  public void setOperation(String op) {
    this.operation = op;
  }

  /**
   * getter for amount.
   */
  public double getAmount() {
    return this.amount;
  }

  /**
   * setter for amount.
   */
  public void setAmount(double am) {
    this.amount = am;
  }

  /**
   * getter for balance.
   */
  public double getBalance() {
    return this.balance;
  }

  /**
   * setter for balance.
   */
  public void setBalance(double bal) {
    this.balance = bal;
  }
}