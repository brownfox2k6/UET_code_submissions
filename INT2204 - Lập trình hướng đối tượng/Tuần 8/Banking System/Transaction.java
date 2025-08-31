public class Transaction {
  public static final int TYPE_DEPOSIT_CHECKING = 1;
  public static final int TYPE_WITHDRAW_CHECKING = 2;
  public static final int TYPE_DEPOSIT_SAVINGS = 3;
  public static final int TYPE_WITHDRAW_SAVINGS = 4;
  private int type;
  private double amount;
  private double initialBalance;
  private double finalBalance;

  /**
   * javadoc.
   */
  public Transaction(int type, double amount, double initialBalance, double finalBalance) {
    this.type = type;
    this.amount = amount;
    this.initialBalance = initialBalance;
    this.finalBalance = finalBalance;
  }

  /**
   * javadoc.
   */
  private String getTransactionTypeString(int type) {
    if (type == TYPE_DEPOSIT_CHECKING) {
      return "Nạp tiền vãng lai";
    } else if (type == TYPE_WITHDRAW_CHECKING) {
      return "Rút tiền vãng lai";
    } else if (type == TYPE_DEPOSIT_SAVINGS) {
      return "Nạp tiền tiết kiệm";
    } else {
      return "Rút tiền tiết kiệm";
    }
  }

  public String getTransactionSummary() {
    String s = "- Kiểu giao dịch: %s. Số dư ban đầu: $%.2f. Số tiền: $%.2f. Số dư cuối: $%.2f.";
    return String.format(s, getTransactionTypeString(type), initialBalance, amount, finalBalance);
  }
}
